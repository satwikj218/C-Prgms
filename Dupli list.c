#include<stdio.h>
int main()
{
	int a[10]={9,2,3,1,2,9,32,13,2,43};
	int key=2,i,count=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==key)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("Item Found %d times",count);
	}
	else
	{
		printf("Item Not Found");
	}
	return 0;
}
