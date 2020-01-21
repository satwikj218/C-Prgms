#include<stdio.h>
int main()
{
	int n,t=0,c=0,a[100],i;
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
			t=t*10+a[i];
	}
	printf("%d",t);
	return 0;
}
