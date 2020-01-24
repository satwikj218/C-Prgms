/*
Selection Sort:
-> Works repeatedly by finding the least item of the list
-> Coplexity = O(n^2)
-> It will divide the given list into two parts
	1. Sorted Array
	2. Unsorted Array
*/

#include<stdio.h>
int selection(int a[],int n)
{
	int i,j,temp,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[k])
				k=j;
		}
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	selection(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
	return 0;
}
