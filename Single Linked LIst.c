/*
--> Linked List:
-> Linked List is responsible for creating Dynamic memory
-> Consists of 2 parts
	1. Data Part
	2. Address
-> Last node always represents NULL.
*/

/*
-->Single Linked List
1. Insert - Start, End, Middle, Position
2. Remove - Start, End, Middle
3. Display
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*s,*l,*c,*p; //s - start, l - last, c - current, p - previous
/*void insertend()
{
	// Insert node at the end
	// malloc - Allocate memory for new node
	struct node *nn=(struct node *)malloc(sizeof(struct node)); // (struct node *) for type casting, nn - new node
	// Accept the Value
	printf("Enter the value: ");
	scanf("%d",&nn->data);
	// New node next memory has to point ot NULL
	nn->next=NULL;
	if(s==NULL) //if list is empty
		s=l=nn;
	else // if list contains any node
	{
		l->next=nn;
		l=nn;
	}
	printf("Node added at the end of the List\n");
	getch();		
}*/
/*void insertstart()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(s==NULL)
	{
		s=l=nn;	
	}
	else
	{
		nn->next=s;
		s=nn;
	}
	getch();
}*/
/*void insertposasc() // Sorting 
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(s==NULL)
	{
		s=l=nn;
	}
	else
	{
		if(nn->data<s->data)
		{
			nn->next=s;
			s=nn;
		}
		else if(nn->data>l->data)
		{
			l->next=nn;
			l=nn;
		}
		else
		{
			for(c=s;c->data<nn->data;p=c,c=c->next);
			nn->next=c;
			p->next=nn;
		}
	}
	getch();
}*/
void insertpos()
{
	int pos,count=1;
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(s==NULL)
		s=l=nn;
	else
	{
		printf("Enter Position: ");
		scanf("%d",&pos);
		if(pos==1)
		{
			nn->next=s;
			s=nn;
		}
		else
		{
			for(c=s;count<pos;p=c,c=c->next,count++);
			p->next=nn;
			nn->next=c;	
		}
		
	}
	getch();
}
/*void deletestart()
{	
	if(s==NULL)
		printf("List Empty");
	else
	{
		if(s->next==NULL)
		{
			s=l=NULL;
			printf("Node is Deleted\n");
		}
		else
		{
			c=s;
			s=s->next;
			c->next=NULL;
			c=NULL;
			printf("Node is Deleted\n");
		}
	}
	getch();
}*/
/*void deleteend()
{
	if(s==NULL)
	{
		printf("List is Empty\n");
	}
	else
	{
		if(s->next==NULL)
		{
			s=l=NULL;
			printf("Node is Deleted\n");	
		}	
		else
		{
			for(c=s;c!=l;p=c,c=c->next);
			l=p;
			p->next=NULL;
			p=NULL;
			c=NULL;
			printf("Node is Deleted\n");
		}
	}
	getch();
}*/
/*void deletepos()
{
	int pos,count=1;
	printf("Enter pos: ");
	scanf("%d",&pos);
	if(s==NULL)
		printf("List is Empty\n");
	else
	{
		if(s->next==NULL)
		{
			s=l=NULL;
			printf("Node Deleted\n");
		}
		else
		{
			for(c=s;count<pos;p=c,c=c->next,count++);
			p->next=c->next;
			c->next=NULL;
			c=NULL;
			printf("Node Deleted\n");
		}
	}
	getch();
}*/
void deletevalue()
{
	int value;
	printf("Enter delete value: ");
	scanf("%d",&value);
	if(s==NULL)
	{
		printf("List Empty\n");
	}
	else
	{
		if(s->next==NULL && s->data==value)
		{
			s=l=NULL;
			printf("Node Deleted\n");
		}
		else if(s->data==value)
		{
			c=s;
			s=s->next;
			c->next=NULL;
			c=NULL;
			printf("Node Deleted\n");
		}
		else if(l->data==value)
		{
			for(c=s;c!=NULL;p=c,c=c->next);
			l=p;
			p->next=NULL;
			c=NULL;
			p=NULL;
			printf("Node Deleted\n");
		}
		else
		{
			for(c=s;c!=NULL;p=c,c=c->next)	
			if(c==NULL)
			{
				printf("Node Deleted\n");
			}
			else
			{
				p->next=c->next;
				c->next=NULL;
				c=NULL;
				printf("Node Deleted\n");
			}
		}		
	}
	getch();
}
void display()
{
	int x=0;
	if(s==NULL)
		printf("List is Empty\n");
	else
	{
		printf("List Elements:\n");
		for(c=s;c!=NULL;c=c->next)
		{
			printf("%d ",c->data);
			x++;
		}
		printf("\n");
	}
	printf("%d Nodes are present in the list\n",x);
	getch();
}
void searchnode()
{
	int x=0,value,count=0;  // x - for position, count - for telling whther the lements is present or not
	printf("enter value to search: ");
	scanf("%d",&value);
	if(s==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		for(c=s;c!=NULL;c=c->next)
		{
			if(c->data==value)
			{
				//printf("Position: %d\n",x+1);
				count++;
			}
			x++;
		}
		if(count==0)
			printf("Element not found\n");
		else
			printf("%d",count);
	}
	getch();
}
int main()
{
	int x;
	s=l=c=p=NULL;
	while(1)
	{
		system("cls");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Search\n");
		printf("5. Exit\n");
		printf("Enter choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:	insertpos();
					break;
			case 2:	deletevalue();
					break;
			case 3:	display();
					break;
			case 4:	searchnode();
					break;
			case 5: return 0;
					break;
		}
	}
	return 0;
}
