#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*s,*c,*l;
void insert()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(s==NULL)
		s=l=nn;
	else
	{
		l->next=nn;
		l=nn;
	}
	printf("Node Inserted\n");
	getch();
}
void deletenode()
{
	if(s==NULL)
		printf("Queue Empty\n");
	else
	{
		c=s;
		s=s->next;
		c->next=NULL;
		c=NULL;
		printf("Node Deleted\n");
	}
	getch();
}
void display()
{
	if(s==NULL)
		printf("Queue Empty\n");
	else
	{
		printf("Queue Elements: ");
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
	s=c=l=NULL;
	while(1)
	{
		system("cls");
		printf("Stack using Linked List\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter Choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:	insert();
					break;
			case 2:	deletenode();
					break;
			case 3:	display();
					break;
			case 4: return 0;
					break;
		}
	}
	return 0;
}
