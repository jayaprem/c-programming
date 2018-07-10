#include <stdio.h>

int main(void) {
	int a,c;
	int sum=0;
	int count=0;
	scanf("%d",&a);
	while(a>0)
	{
	c=a%10;
	for(int i=2;i<c;i++)
	{
		if(c%i==0)
		{
			count=1;
		}
	}
	if(count==0)
	{
		sum=sum+c;
	}
	a=a/10;
	}
	printf("%d",sum);
	return 0;
}
input:333
output 9(3+3+3)
input:686
output 0(no primedigit in the number)
