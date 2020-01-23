#include<stdio.h>
int main()
{
	int x,y,i,temp;
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		int n=i;
		int prev=n%10;
		n/=10;
		while(n>0)
		{
			temp=n%10;
			if(prev==temp)
			{
				break;
			}
			prev=temp;
			n/=10;
		}
		if(n==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
