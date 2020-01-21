/*

 C/C++ - Static compilers
 Java/Python/C# - Dynamic Compilers
 
*/
 
#include<stdio.h>
int main()
{
	int n,i;  // n --> -1 < n < 100
	scanf("%d",&n);		// Reading the size
	int a[n];			// Array Declaration
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	// Taking the input
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		printf("%u \n",&a[i]);	// Adressess
	}
	return 0;	
}
