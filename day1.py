print("===简易计算器===")
a = float(input("请输入第一个数："))
b =float(input("请输入第二个数："))
print("--- 四则运算结果 ---")
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")
print(f"{a} / {b} = {a / b if b != 0 else '除数不能为零'}")
print("平方:", a ** 2,b**2)
print("平均值:", (a + b) / 2)








