#include<stdio.h>
int main()
{
double M;
int N;
scanf("%lf",&M);
scanf("%d",&N);
double h=M;
double len=M;
double reb=0;
for(int i=1;i<=N;i++)
{
reb=0.5*h;
if(i<N)
{
len=2*reb+len;
}
h=reb;
}
printf("%.2lf %.2lf\n",reb,len);
return 0;
}
