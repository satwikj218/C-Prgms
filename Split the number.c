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
		printf("%d ",a[i]);
	return 0;
}
