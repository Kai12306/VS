#include<stdio.h>
int main()
{
int N;
scanf("%d",&N);
int point=1;
for(int i=1;i<N;i++)
{
point=(point+1)*2;
}
printf("%d\n",point);
return 0;
}
