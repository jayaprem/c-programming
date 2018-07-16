#include <stdio.h>

int main(void) {
	int b[30][30];
	int a[30][30];
	int n,m,i,j,temp;
	int count=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
			a[i][j]=b[i][j];
		}
	}
	printf("given matrix\n");
	for(i=0;i<n;++i)
	{
	for(j=0;j<m;++j)
	{
		printf("%d",a[i][j]);
			printf("\t");
	}
	printf("\n");
	}
	printf("after sorting\n");
	for(j=0;j<m;j++)
	{
		if(count%2!=0)
		{
		for(i=0;i<n;i++)
		{
			for(int k=i+1;k<n;k++)
			{
				if(a[i][j]>a[k][j])
				{
				temp=a[k][j];
				a[k][j]=a[i][j];
				a[i][j]=temp;
				}
			}
		}
		}
		else
		{
		for(i=0;i<n;i++)
		{
			for(int k=i+1;k<n;k++)
			{
				if(a[i][j]<a[k][j])
				{
				temp=a[k][j];
				a[k][j]=a[i][j];
				a[i][j]=temp;
				}
			}
		}	
		}
		count++;
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
		printf("%d",a[i][j]);
			printf("\t");
	}
	printf("\n");
	}
	return 0;
}
