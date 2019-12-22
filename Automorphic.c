#include<stdio.h>
int main()
{
	int n,temp,temp1,sum1=0,rem2=0,count=0,i,rem=0,sum=0,sqr=0;
	scanf("%d",&n);
	temp1=n;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		count++;
		temp/=10;
	}
	sqr=n*n;
	for(i=0;i<count;i++)
	{
		rem=sqr%10;
		sum=(sum*10)+rem;
		sqr/=10;
	}
	while(sum!=0)
	{
		rem2=sum%10;
		sum1=(sum1*10)+rem2;
		sum/=10;
	}
	if(sum1==temp1)
		printf("Automorphic No");
	else
		printf("Not Automorphic");
}
