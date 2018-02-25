#include <stdio.h>

int main(void) {
	int n,k,i,count;
	scanf("%d%d",&n,&k);
	if(n<=100000&&k<=100000)
	{
	for(i=n+1;i<k;i++)
	{
	count=0;
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		count++;
	}

	if(count==0)
		printf("%d\t",i);
	}
	}
	else
	printf("invalid");
	return 0;
}
