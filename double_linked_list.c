#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int info;
	struct node *prev,*next;
};
struct node *start=NULL;

void addnode()
{
	struct node *n,*t;
	n=(struct node*)malloc(sizeof(struct node));
	printf("Enter value");
	scanf("%d",&n->info);
	n->prev=NULL;
	n->next=NULL;
	if (start==NULL)
	  start=n;
	else
    {
    	t=start;
		while(t->next!=NULL)
    	{
    	   t=t->next;
		}
    	t->next=n;
    	n->prev=t;
	}
}

void delfirst()
{
	struct node *t;
	if (start==NULL)
	  printf("List is empty");
	else
	{
		t=start;
		start=start->next;
		start->prev=NULL;
		free (t);		
	}
}

void showlist()
{
	struct node *p;
	if (start==NULL)
	  printf("List is empty");
	else
	{
	p=start;
	while(p)
	{
		printf("%d",p->info);
		p=p->next;
	}
}
}

void reverse()
{
   struct node *current=start,*prev=NULL,*nx=NULL;
   while(current)	
   {
   	 nx=current->next;
   	 current->next=prev;
   	 current->prev=nx;
   	 prev=current;
   	 current=nx;
   }
   start=prev;
}

void main()
{
	int i;
    for(i=0;i<5;i++)
    addnode();
    reverse();
    showlist();
    
}
