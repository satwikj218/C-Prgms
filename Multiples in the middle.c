/*
input - 
5
1 3 7 8 4

output - 
1 7 24 28 4

First & Last Nos. are same
Middle Nos. are multiples of its prev and next nos.
*/
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i!=0&&i!=n-1)
			printf("%d ",a[i-1]*a[i+1]);
		else
			printf("%d ",a[i]);
	}
}
