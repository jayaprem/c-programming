#include <stdio.h>

int main(void) {
int i,j,k,t,n,s,t1,n1,n2,c,a[100];
scanf("%d %d" ,&s,&n1);
t1=n1;
for(t=1;t<=s;t++)
{
c=1;
n2=t1;
n=n1;
//printf("%d",n);
for(i=n;i>0;i--)
{
for(j=1;j<n2;j++)
{
printf(" ");
}
for(k=1;k<=c;k++)
{
printf("*");
}
printf("\n");
c=c+2;
n2--;
}
a[t]=c;
n1--;
}
printf("\n");
//printf("%d",a[1]);
for(i=s;i>0;i--)
{
	for(j=1;j<a[1]/2;j++)
	{
	printf(" ");
	}
	printf("*");
	printf("\n");
}
return 0;
}
