/*
First and Last are same
Middle nos are printed only if both left and right are even nos.
*/

#include<stdio.h>
int main()
{
	int n,c=0,a[100],i;
	scanf("%d",&n);
	while(n!=0)
	{
		a[c]=n%10;
		n/=10;
		c++;
	}
	for(i=c-1;i>=0;i--)
	{
		if(i!=0&&i!=c-1)
		{
			if((a[i-1]%2==0)&&(a[i+1]%2==0))
				printf("%d ",a[i]);
		}
		else
			printf("%d ",a[i]);
	}
	return 0;
}
