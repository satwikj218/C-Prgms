#include<stdio.h>
int main()
{
	int n1,i,n2,count1=0,count2=0;
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1;i++)
	{
		if(n1%i==0)
			count1++;
	}
	for(i=1;i<=n2;i++)
	{
		if(n2%i==0)
			count2++;
	}
	if((count1==2)&&(count2==2))
	{
		if((n1-n2)==2||(n1-n2)==-2)
			printf("Twin Primes");
	}
	else
			printf("Not a Twin Prime");		
}
