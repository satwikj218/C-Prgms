#include<stdio.h>
int checkdig(int n)
{
	int rem=0;
	while(n!=0)
	{
		rem=n%10;
		n/=10;
		if(rem==n)
		{	
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	long int x,y,rem=0,i,n;
	scanf("%ld%ld",&x,&y);
	for(i=x;i<=y;i++)
	{
		/*n=i;
		rem=n%10;
		n=n/10;	
		if(rem!=n)
		{
			printf("%d ",i);
		}*/
		if(checkdig(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}
