#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* x, int* y);
int main()
{
//一.
int arr[] = { 10,20,30,40,50,60 };
for (int i = 0;i <= 5;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
//二.
int a = 100;
int* p = &a;
int** pp = &p;
**pp = 200;
printf("%d\n",a);
//三.
int b;
int c;
scanf("%d%d",&b,&c);
swap(&b,&c);
printf("%d %d\n",&b,&c);
return 0;
}
void swap(int* x, int* y)
{
int* te;
te = x;
x = y;
y = te;
}
