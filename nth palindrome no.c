#include<stdio.h>
int palindrome(int m)
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
}
int main()
{
	int n,k,i=0,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(palindrome(a[i]))
		{
			count++;
			if(count==k)
			{
				printf("%d",a[i]);
				break;	
			}
		}
	}
	return 0;
}
