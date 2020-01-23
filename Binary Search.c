/*
Binary Search:
-> Works only on Unique List & Sorted List.
-> Complexity = O(log(n))
-> Best = O(1)
-> Worst = O(log(n))
*/

/*

*/

#include<stdio.h>
int bubble(int a[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
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
int binarysearch(int a[],int left,int right,int key)
{
	int mid;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(a[mid]==key)
			return mid;
		if(a[mid]<key)
			left=mid+1;
		else
			right=mid-1;
	}
	return -1;
}
int main()
{
	int n,key,left=0,right=0,res=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&key);
	bubble(a,n);
	left=0;
	right=n-1;
	res=binarysearch(a,left,right,key);
	if(res>=0)
		printf("Element Found");
	else
		printf("Element not found");
	return 0;
}
