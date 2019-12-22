#include<stdio.h>
int main()
{
	int n,i,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==temp)
		printf("Perfect no");
	else
		printf("Not Perfect");
}
