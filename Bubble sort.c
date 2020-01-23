/*
Bubble Sort:
-> It compares the adjacent items, if the firt item is greater than second time then swap both the items
-> Complexity = O(n^2)
*/

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
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubblesort(a,n);
	return 0;
}
