/*
Queue:
-> Items will alway be removed from 'FRONT', & enter from the 'REAR'.
-> FIFO - FIRST IN FIRST OUT
-> ENQUEUE - Insert item
-> DEQUEUE - Delete item
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],f=-1,r=-1,x,i;
	while(1)
	{
		system("cls");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter the choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:	if(r<n-1)
					{
						r++;
						if(r==0)
						{
							f=0;	
						}
						printf("Enter a value: ");
						scanf("%d",&a[r]);
						printf("Value inserted");
						getch();
					}
					else
					{
						printf("Queue is full");
						getch();
					}
					break;
			case 2:	if(f!=-1&&r!=-1)
					{
						if(f==r) // f=0 r=0
						{
							a[f]=0;
							f--;
							r--;	
							printf("Value Removed");
							getch();
						}
						else
						{
							for(i=f+1;i<=r;i++)
							{
								if(i==r) // Last Time
								{
									a[i-1]=a[i];
									a[i]=0; // a[r] = 0
									r--; // Decrease Index of 
								}
								else
								{
									a[i-1]=a[i];	
								}
							}
							printf("Value Removed");
							getch();
						}
					}
					else
					{
						printf("Queue is Empty");
						getch();
					}
					break;
			case 3:	if(f!=-1&&r!=-1)
					{
						printf("Items: ");
						for(i=0;i<=r;i++)
						{
							printf("%d ",a[i]);		
						}
						getch();
					}
					else
					{
						printf("Queue is empty");
						getch();
					}
					break;
			case 4:	return 0;
					break;
		}
	}
	return 0;
}
