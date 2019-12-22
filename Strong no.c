#include<stdio.h>
int main()
{
	int n,temp,rem=0,i,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		int fact=1;
		rem=n%10;
		for(i=1;i<=rem;i++)
		{
			fact*=i;
		}
		sum+=fact;
		n/=10;
	}
	if(sum==temp)
		printf("Strong");
	else
		printf("Not Strong");
}
