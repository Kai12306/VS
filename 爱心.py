# -*- coding: utf-8 -*-
"""
国庆节主题版，演出顺序：

  1. 小窗口沿心形轮廓一个个弹出（先画心形）
  2. 心形画完 -> 正中间弹出大方框，写「国庆节快乐」
  3. 大方框上面一行 + 下面一行，各附几个小窗口
       - 一半写「国庆节假期快乐」-> 红 / 暗红 / 浅红 轮流
       - 一半从祝福语列表里随机抽 -> 金橙色系
  4. 心形那圈消失，中间那组留着
  5. 小窗口铺满全屏（星星那一幕，保留）
  6. 中间那组重新提到最上层
  7. 逐个关闭

运行：在 VS Code 里按 Ctrl+F5，或者命令行  python heart.py

想调快慢 / 改文字 / 改颜色 / 改密度，只改下面那块【可调参数】。
"""

import tkinter as tk
import random
import time
import math
import sys

# ============================================================
#  可调参数
# ============================================================
# --- 正中间那个大方框 ---
BIG_TEXT = '国庆节快乐'         # 大方框里写的字
SIDE_TEXT = '国庆节假期快乐'     # 旁边小窗口上"那个特定词"
SIDE_PER_ROW = 3               # 大方框上面一行、下面一行各放几个
BIG_RATIO_W = 0.24             # 大方框宽度 = 屏幕宽 x 这个数
BIG_RATIO_H = 0.16             # 大方框高度 = 屏幕高 x 这个数
BIG_FONT_SIZE = 40             # 大方框字号

# --- 心形 ---
HEART_COUNT = 100       # 心形用几个窗口描出来
HEART_DELAY = 0.08      # 心形：每弹一个窗口停多久（秒）
HEART_HOLD  = 2.0       # 心形画完后停留几秒（然后中间才出方框）
HEART_FILL  = 0.55      # 心形占屏幕的比例

# --- 中间那组画完后停多久 ---
CENTER_HOLD = 3.0

# --- 铺满全屏（星星那一幕）---
SNOW_FILL   = 1.0       # 密度系数。1.0 = 原版铺满；调成 0.7 就稀疏些、留出空隙
SNOW_DELAY  = 0.012
SNOW_HOLD   = 10.0

# --- 关闭 ---
CLOSE_DELAY = 0.015     # 每个窗口之间停多久（固定值，不随窗口数变）
# ============================================================

# ------------------------------------------------------------
#  配色
# ------------------------------------------------------------
# 「国庆节假期快乐」专用：红、暗红、浅红 三种轮流
RED_COLORS = ['red', 'darkred', '#CD5C5C']

# 其他窗口：金橙色系，不用那么红
NORMAL_COLORS = ['gold', 'orange', 'darkorange', 'goldenrod',
                 'tomato', 'crimson']

# 深色底 -> 用金色字；亮色底 -> 用深红字（保证看得清）
DARK_BGS = {'red', 'darkred', 'crimson', 'firebrick', 'orangered',
            'tomato', '#B22222', '#CD5C5C'}
GOLD = '#FFD700'
DEEP_RED = '#8B0000'

# ------------------------------------------------------------
#  祝福语列表（心形阶段和铺满阶段都从这里随机抽）
# ------------------------------------------------------------
tips = ['国庆节快乐', '假期快乐', '玩得开心', '好好休息',
        '出门走走', '吃好喝好', '别熬夜', '休息够了再出发']

POP_W, POP_H = 150, 60      # 小窗口尺寸

root = None
hearts = []        # 心形那一圈小窗口
center_wins = []   # 中间那组（大方框 + 旁边小窗口）
all_wins = []      # 铺满全屏的小窗口

_red_index = 0     # 红色轮换用的游标


def pick_fg(bg):
    """深色底配金字，亮色底配深红字"""
    return GOLD if bg in DARK_BGS else DEEP_RED


def next_red():
    """红 -> 暗红 -> 浅红 -> 红 ... 轮流"""
    global _red_index
    bg = RED_COLORS[_red_index % len(RED_COLORS)]
    _red_index += 1
    return bg


def calc_scale(sw, sh):
    """心形公式的自然跨度约 32 宽 x 29 高，据此算缩放到屏幕多大"""
    return min(sw / 32.0, sh / 29.0) * HEART_FILL


def center_free_half(sw, sh):
    """心形最宽处(左右两侧)减掉半个窗宽，得到中心能用的半径"""
    return 16 * calc_scale(sw, sh) - POP_W / 2.0


def make_big_window(sw, sh):
    """正中间那个大方框。宽度会自动收窄，保证不会从心形里凸出来"""
    inner = center_free_half(sw, sh)
    w = min(int(sw * BIG_RATIO_W), int(inner * 2 * 0.92))
    h = int(sh * BIG_RATIO_H)
    x = (sw - w) // 2
    y = (sh - h) // 2

    bg = next_red()        # 大方框也走红/暗红/浅红那一套

    win = tk.Toplevel()
    win.geometry(f'{w}x{h}+{x}+{y}')
    win.title(BIG_TEXT)
    win.attributes('-topmost', 1)
    win.configure(bg=bg)

    tk.Label(win, text=BIG_TEXT, bg=bg, fg=pick_fg(bg),
             font=('微软雅黑', BIG_FONT_SIZE, 'bold')).pack(
                 expand=True, fill='both')
    return win, w, h


def make_side_windows(sw, sh, big_w, big_h):
    """大方框上面一行、下面一行，各排几个小窗口。
       一半写 SIDE_TEXT（红色系轮换），一半从 tips 里随机抽（普通色）。"""
    gap = 10

    inner = center_free_half(sw, sh)
    per_row = max(1, min(SIDE_PER_ROW, int((inner * 2 + gap) // (POP_W + gap))))

    row_w = per_row * POP_W + (per_row - 1) * gap
    x0 = (sw - row_w) // 2

    y_top = (sh - big_h) // 2 - gap - POP_H
    y_bot = (sh + big_h) // 2 + gap

    wins = []
    slot = 0
    for y in (y_top, y_bot):
        for k in range(per_row):
            x = x0 + k * (POP_W + gap)
            if slot % 2 == 0:
                # 写「国庆节假期快乐」-> 红色系轮换
                win = create_popup(x, y, text=SIDE_TEXT)
            else:
                # 从祝福语列表里随机抽 -> 普通配色
                win = create_popup(x, y, text=random.choice(tips))
            wins.append(win)
            slot += 1
            root.update()
            time.sleep(0.06)
    return wins


def heart_points(n, screen_w, screen_h):
    """算出心形轮廓上 n 个点的屏幕坐标"""
    scale = calc_scale(screen_w, screen_h)

    points = []
    for i in range(n):
        t = i / n * 2 * math.pi
        x = 16 * math.sin(t) ** 3
        y = (13 * math.cos(t) - 5 * math.cos(2 * t)
             - 2 * math.cos(3 * t) - math.cos(4 * t))
        sx = int(screen_w / 2 + x * scale - POP_W / 2)
        sy = int(screen_h / 2 - y * scale - POP_H / 2)
        sx = max(0, min(sx, screen_w - POP_W))
        sy = max(0, min(sy, screen_h - POP_H))
        points.append([sx, sy])
    return points


def create_popup(x, y, text=None):
    """在坐标 (x, y) 处弹一个小窗口。
       text 传 SIDE_TEXT 时用红色系轮换；传别的（或为空）用普通配色。"""
    win = tk.Toplevel()
    win.geometry(f'{POP_W}x{POP_H}+{x}+{y}')
    win.title('国庆节')
    win.attributes('-topmost', 1)

    if text is None:
        text = random.choice(tips)

    bg = next_red() if text == SIDE_TEXT else random.choice(NORMAL_COLORS)

    tk.Label(win, text=text, bg=bg, fg=pick_fg(bg),
             font=('微软雅黑', 14, 'bold'),
             width=20, height=3).pack()
    return win


def close_win(w):
    try:
        if w is not None and w.winfo_exists():
            w.destroy()
    except tk.TclError:
        pass


def main():
    global root
    root = tk.Tk()
    root.withdraw()
    sw = root.winfo_screenwidth()
    sh = root.winfo_screenheight()

    # ================= 第 1 步：先画心形 =================
    points = heart_points(HEART_COUNT, sw, sh)
    for i, (x, y) in enumerate(points):
        win = create_popup(x, y)
        hearts.append(win)
        root.update()
        time.sleep(HEART_DELAY)

    time.sleep(HEART_HOLD)

    # ========== 第 2 步：心形画完 -> 中间出大方框 ==========
    big, big_w, big_h = make_big_window(sw, sh)
    center_wins.append(big)
    root.update()
    time.sleep(0.4)

    # ========== 第 3 步：大方框旁边再附几个小窗口 ==========
    center_wins.extend(make_side_windows(sw, sh, big_w, big_h))

    time.sleep(CENTER_HOLD)

    # ========== 第 4 步：心形那圈消失，中间那组留着 ==========
    for w in hearts:
        close_win(w)
    root.update()
    time.sleep(0.6)

    # ========== 第 5 步：铺满全屏（星星那一幕）==========
    base = (sw // POP_W) * (sh // (POP_H - 20)) + 50
    count = int(base * SNOW_FILL)
    for _ in range(count):
        x = random.randint(0, sw - POP_W)
        y = random.randint(0, sh - POP_H)
        win = create_popup(x, y)
        all_wins.append(win)
        root.update()
        time.sleep(SNOW_DELAY)

    # 铺满之后，把中间那组重新提到最上层
    for w in center_wins:
        try:
            if w.winfo_exists():
                w.lift()
                w.attributes('-topmost', 1)
        except tk.TclError:
            pass
    root.update()

    time.sleep(SNOW_HOLD)

    # ================= 第 6 步：逐个关掉 =================
    for win in all_wins:
        close_win(win)
        root.update()
        time.sleep(CLOSE_DELAY)

    # ========== 最后关中间那组 ==========
    time.sleep(0.5)
    for win in center_wins:
        close_win(win)
        root.update()
        time.sleep(0.12)

    try:
        root.destroy()
    except tk.TclError:
        pass


if __name__ == "__main__":
    main()
