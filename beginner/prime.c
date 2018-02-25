#include <stdio.h>

int main(void)
{
	int n,i,count=0;
	scanf("%d",&n);
	if(n<=1000)
	{
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==1)
	{
		printf("yes");
	}
	else
	printf("no");
	}
	else
		printf("invalid");

	return 0;
}
