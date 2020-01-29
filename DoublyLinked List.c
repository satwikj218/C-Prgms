/*
Doubly Linked List:
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*s,*c,*l,*p;
/*void insertstart()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->prev=NULL;
	nn->next=NULL;
	if(s==NULL)
		s=l=nn;
	else
	{
		nn->next=s;
		s->prev=nn;
		s=nn;
	}
	getch();
}*/
void insertlast()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->prev=NULL;
	nn->next=NULL;
	if(s==NULL)
		s=l=nn;
	else
	{
		l->next=nn;
		nn->prev=l;
		l=nn;	
	}
	printf("Node Inserted\n");
	getch();
}
/*void insertasc()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	nn->prev=NULL;
	nn->next=NULL;
	if(s==NULL)
		s=l=nn;
	else
	{
		if(nn->data<s->data)
		{
			nn->next=s;
			s->prev=nn;
			s=nn;
		}
		else if(nn->data>l->data)
		{
			l->next=nn;
			nn->prev=l;
			l=nn;
		}
		else
		{
			for(c=s;c->data<nn->data;p=c,c=c->next);
			nn->next=c;
			c->prev=nn;
			nn->prev=p;
			p->next=nn;
		}
	}
	printf("Node Inserted\n");
	getch();
}*/
/*void insertpos()
{
	struct node *nn=(struct node *)malloc(sizeof(struct node));
	printf("Enter Value: ");
	scanf("%d",&nn->data);
	int pos,count=1;
	nn->prev=NULL;
	nn->next=NULL;
	if(s==NULL)
		s=l=nn;
	else 
	{
		printf("Enter Pos: ");
		scanf("%d",&pos);
		if(pos==1)
		{	
			nn->next=s;
			s->prev=nn;
			s=nn;
		}
		else
		{
			for(c=s;count<pos&&c->next!=NULL;p=c,c=c->next,count++);
			if(c->next!=NULL)
			{
				p->next=nn;
				nn->prev=p;
				c->prev=nn;
				nn->next=c;
			}
			else
			{
				l->next=nn;
				nn->prev=l;
				l=nn;
			}	
		}
	}
	printf("Node Inserted\n");
	getch();
}*/
/*void deletestart()
{
	if(s==NULL)
		printf("List Empty\n");
	else if(s->next==NULL)
		s=l=NULL;
	else
	{
		c=s;
		s=s->next;
		s->prev=NULL;
		c->next=NULL;
		c=NULL;
		printf("Node Deleted\n");
	}
	getch();
}*/
void deletelast()
{
	if(s==NULL)
		printf("List Empty\n");
	else
	{
		if(s->next==NULL)
			s=l=NULL;
		else
		{
			p=l->prev;
			c=l;
			l=p;
			p->next=NULL;
			c->prev=NULL;
			c=NULL;
			p=NULL;
		}
		printf("Node Deleted\n");	
	}
	getch();
}
/*void deletevalue()
{
	int value;
	if(s==NULL)
		printf("List Empty\n");
	else
	{
		printf("Enter Value: ");
		scanf("%d",&value);
		if(value==s->data&&s->next==NULL)
			l=s=NULL;
		else if(value==s->data)
		{
			c=s;
			s=s->next;
			c->next=NULL;
			s->prev=NULL;
			c=NULL;
		}
		else if(value==l->data)
		{
				p=l->prev;
				c=l;
				l=p;
				p->next=NULL;
				c->prev=NULL;
				c=NULL;
		}
		else
		{
			for(c=s;c!=NULL&&c->data!=value;p=c,c=c->next);
			if(c==NULL)
			{
				printf("Value not found\n");
				getch();
				return 0;
			}	
			else
			{
				p->next=c->next;
				c->next->prev=p;
				c->next=NULL;
				c->prev=NULL;
				c=NULL;
			}
		}
		printf("Node Deleted\n");	
	}
	getch();
}*/
void display()
{
	if(s==NULL)
		printf("Empty List\n");
	else
	{
		printf("List Elements: ");
		for(c=s;c!=NULL;c=c->next) // last inserted node is displayed First if insertstart() is used.
		{
			printf("%d ",c->data);
		}
		/*for(c=l;c!=NULL;c=c->prev) // Last inserted node is displayed Last if insertstart() is used.
		{
			printf("%d ",c->data);
		}*/
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
			case 1:	insertlast();
					break;
			case 2:	deletelast();
					break;
			case 3:	display();
					break;
			case 4:	return 0;
					break;
		}
	}
	return 0;
}
