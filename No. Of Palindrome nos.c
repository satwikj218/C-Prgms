#include<stdio.h>
/*int palindrome(int m)
{
	int rem=0,rev=0,temp=m;
	
	while(m!=0)
	{
		rem=m%10;
		rev=rev*10+rem;
		m/=10;
	}
	if(rev==temp)
		return 1;	
	else
		return 0;
}*/
int main()
{
	int n,m,i,count=0,rem=0,rev=0,temp=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		/*	res = palindrome(m);
			if(res==1)
				count++;
		*/
		temp=m;
		while(m!=0)
		{
			rem=m%10;
			rev=rev*10+rem;
			m/=10;
		}
		if(temp==rev)
		{
			count++;
		}
		temp=0;
		rev=0;
	}
	printf("%d",count);
	return 0;
}
