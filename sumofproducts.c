#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int a[10],b[10],c[10],i,m,j,n,k,t,max=0,c1=0,sum=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
		c[j]=abs(b[j]);
	}
		max=c[0];
	for(i=1;i<n;i++)
	{
		if(max<c[i])
		{
			c1++;
			max=c[i];
		}
	}
	k=2*m;
	if(a[c1]<0)
	{
		//printf("%d",a[c1]);
	a[c1]=a[c1]+k;
	}
	else
	{
	a[c1]=a[c1]-k;	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i]*b[i];
		//printf("%d",sum);
	}
	printf("%d",sum);
	return 0;
}
