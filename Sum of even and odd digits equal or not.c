#include<stdio.h>
int main()
{
	int n,sum1=0,count=0,temp,sum2=0,i=0,rem=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		count++;
		temp/=10;
	}
	while(n!=0)
	{
		for(i=0;i<count;i++)
		{
			rem=n%10;
			if(i%2==0)
				sum1+=rem;
			else
				sum2+=rem;
			n/=10;
		}
	}	
	if(sum1==sum2)
		printf("Equal");
	else
		printf("Not Equal");
}
	
