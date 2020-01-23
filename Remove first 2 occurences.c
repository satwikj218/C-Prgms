#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,key,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			count++;
			if(count>2)
			{
				printf("%d,",a[i]);
			}
		}
		else
		{
			if(i==n-1)
			{
				printf("%d",a[i]);
			}
			else
			{
				printf("%d,",a[i]);	
			}
			
		}
	}
	return 0;
}
