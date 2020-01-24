/*
--> Difference b/w Selection & Insertion Sort:
	-> Selection is used for finding the least items of the list.
	-> Insertion Sort is used to sort first 'n' items of the list.
*/

//Insertion Sort

#include<stdio.h>
int insertion(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0&&a[j]>k)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=k;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
