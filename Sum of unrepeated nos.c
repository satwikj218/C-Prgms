#include<stdio.h>
int main()
{
	int n,i,j,count=0,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==a[i])
			{
				count++;
			}
		}
		if(count==1)
			sum+=a[i];
	}
	printf("%d",sum);
}
