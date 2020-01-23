#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++) //n-1 for optimised time complexity, normally n
	{
		for(j=0;j<n-1-i;j++) // n-1-i for optimised time complexity, normally n-1
		{
			if(a[j]>a[j+1])
			{	
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}		
		}
	}
}
int main()
{
	int n,left,right,mid;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	left=0;
	right=n-1;
	mid=left+(right-left)/2;
	bubblesort(a,n);
	for(i=0;i<mid;i++)
		printf("%d ",a[i]);
	for(i=n-1;i>=mid;i--)
		printf("%d ",a[i]);
}
