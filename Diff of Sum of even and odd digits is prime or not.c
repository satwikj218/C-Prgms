#include<stdio.h>
int main()
{
	int n,sum1=0,diff=0,count=0,count1=0,temp,sum2=0,i=0,rem=0;
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
	diff = sum2-sum1;
	for(i=1;i<=diff;i++)
	{
		if(diff%i==0)
			count1++;
	}
	if(count1==2)
		printf("Prime");
	else
		printf("Not Prime");
}
