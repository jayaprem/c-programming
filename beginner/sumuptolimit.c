#include<stdio.h>
int main()
{
	int a[50],n,l,sum=0,i;
	printf("enter the total number of values\n");
	scanf("%d",&n);
	printf("enter the limit\n");
	scanf("%d",&l);
	if(n>0)
	{
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	}
	else
	printf("invalid");
	return 0;
	
}
