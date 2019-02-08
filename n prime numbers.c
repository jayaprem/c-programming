Write a program to generate the first n terms in the series --- 2,3,5,7,11,...,17
#include<stdio.h>
int main()
{
int n,i=3,count,a;
scanf("%d",&n);
if(n>=1)
printf("2");
for(count=1;count<=n;)
{
for(a=2;a<=i-1;a++)
{
if(i%a==0) break;
}
if(i==a)
{
printf("%d ",i);
count++;
}
i++;
}
return 0;
}
