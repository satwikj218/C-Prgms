/*
Stack:
-> Memory Storage
-> LIFO -- Last In First Out
-> PUSH -- Insert item into the stack.
-> POP -- Remove item from the stack.
-> PEEK -- Represent the top item of the stack.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],top=-1,x,i;
	while(1)
	{
		system("cls");
		printf("\nSTACK\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. PEEK\n");
		printf("4. DISPLAY\n");
		printf("5. EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&x);
		switch(x)
		{	
			case 1:	if(top<n-1)
					{
						top++;
						printf("\n Enter item value: ");
						scanf("%d",&a[top]);
						printf("Value is pushed");
						getch();
					}
					else
					{
						printf("Stack is Full / Overflow");
						getch();
					}
					break;
			case 2:	if(top!=-1)
					{
						a[top]=0;
						top--;
						printf("Value is popper out");
						getch();
					}
					else
					{
						printf("Stack is Empty / Underflow");
						getch();
					}
					break;
			case 3:	if(top!=-1)
					{
						printf("Peek Item of stack is: ");
						printf("%d ",a[top]);
						getch();
					}
					else
					{
						printf("Stack is Empty / Underflow");
						getch();
					}
					break;
			case 4:	if(top!=-1)
					{
						printf("Items of stack: ");
						for(i=top;i>=0;i--)
							printf("%d ",a[i]);
						getch();
					}
					else
					{
						printf("Stack is Empty / Underflow");
						getch();
					}
					break;
			case 5:	return 0;
					break;
		}
	}
	return 0;
}
