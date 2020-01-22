#include<stdio.h>
int main()
{
	int n,a[100],count=2,i;
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-2]+a[i-1];
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
