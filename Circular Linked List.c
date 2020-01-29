#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*s,*c,*l,*p;
/*void insertstart()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(l==NULL) // Starting when no elements are present
	{
		l=nn;
		l->next=l;
	}
	else // Insert at Beggining
	{
		nn->next=l->next;
		l->next=nn;
	}
	printf("Node Inserted\n");
	getch();
}*/
/*void insertlast()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(l==NULL)
	{
		l=nn;
		l->next=l;
	}
	else
	{
		nn->next=l->next;
		l->next=nn;
		l=nn;
	}
	printf("Node Inserted\n");
	getch();
}*/
void insertasc()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(l==NULL)
	{
		l=nn;
		l->next=l;
	}
	else
	{
		if(nn->data<l->next->data)
		{
			nn->next=l->next;
			l->next=nn;
		}
		else if(nn->data>l->data)
		{
			nn->next=l->next;
			l->next=nn;
			l=nn;
		}
		else
		{
			for(c=l->next,p=c;p!=l&&c->data<nn->data;p=c,c=c->next);
			nn->next=c;
			p->next=nn;
		}
	}
	printf("Node Inserted\n");
	getch();
}
void deletenode()
{
	getch();
}
void display()
{
	if(l==NULL)
		printf("List Empty\n");
	else
	{
		printf("List Elements: ");
		for(c=l->next;c!=l;c=c->next)
		{
			printf("%d ",c->data);
		}
		printf("%d",c->data); // To print the last element
	}
	getch();
}
int main()
{
	int x;
	s=c=l=p=NULL;
	while(1)
	{
		system("cls");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter Choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:	insertasc();
					break;
			case 2:	deletenode();
					break;
			case 3:	display();
					break;
			case 4:	return 0;
					break;
		}
	}
	return 0;
}
