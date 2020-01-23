#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,key;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			for(j=0;j<=i;j++)
			{
				printf("!");
			}
			printf(" ");
		}
	}
	return 0;
}
