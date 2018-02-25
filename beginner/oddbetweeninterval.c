#include <stdio.h>

int main(void) {
	int n,k,i;
	scanf("%d%d",&n,&k);
	if(n<=100000&&k<=100000)
	{
	for(i=n+1;i<k;i++)
	{
		if(i%2!=0)
		printf("%d\t",i);
	}
	}
	else
	printf("invalid");
	return 0;
}
