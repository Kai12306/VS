#include<stdio.h>
int main()
{
int M,N;
int point=M;
for(int i=1;i<N;i++)
{
M=0.5*M-1;
point=point-M;
}
if(point=1)
{
printf("%d\n",M);
break;
}
return 0;
}
