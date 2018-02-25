#include <stdio.h>
int main(void)
{
	
	int count=0,n;
	printf("enter a number\n");
	scanf("%d",&n);
	if(n>0)
	{
	while(n!=0)
	{
	   int  t=n%10;
	     if(t!=0)
	     {
		count++;
	     }
	     n=n/10;
	}
	printf("%d",count);
	}
	else
	printf("invalid");
	return 0;
}
