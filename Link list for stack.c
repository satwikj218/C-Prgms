#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*s,*p,*c,*top;
void push()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(s==NULL)
		s=nn;
	else
	{
		nn->next=s;
		s=nn;
	}
	printf("Node Pushed\n");
	getch();
}
void pop()
{
	if(s==NULL)
		printf("Stack is Empty / Underflow\n");
	else
	{
		c=s;
		s=s->next;
		c->next=NULL;
		c=NULL;
		printf("Node is popped\n");
	}
	getch();
}
void display()
{
	if(s==NULL)
		printf("Stack Empty / Underflow\n");
	else
	{
		printf("Stack Elements: ");
		for(c=s;c!=NULL;c=c->next)
		{
			printf("%d ",c->data);
		}
	}
	getch();
}
int main()
{
	int x;
	s=c=p=NULL;
	while(1)
	{
		system("cls");
		printf("Stack using Linked List\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. DISPLAY\n");
		printf("4. EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:	push();
					break;
			case 2:	pop();
					break;
			case 3:	display();
					break;
			case 4: return 0;
					break;
		}
	}
	return 0;
}
