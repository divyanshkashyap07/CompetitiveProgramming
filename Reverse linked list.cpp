#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *START=NULL;

struct node* createnode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return (n);
};

void add_node()
{
     struct node *temp,*p;
     temp=createnode();
     scanf("%d",&temp->info);
	 temp->link=NULL;
     if (START==NULL)
         START=temp;
         
     else
        {
        	p=START;
        	while(p->link!=NULL)
        	 p=p->link;
        	 p->link=temp;
		}
 }
 
void reverse()
{
	struct node *prev=NULL,*current,*next=NULL;
	current=START;
	while(current)
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;		
	}
	START=prev;
}
 

void show()
{
	struct node * t;
	t=START;
	while(t->link!=NULL)
{
		printf("%d\n",t->info);
	t=t->link;
	}printf("%d",t->info);
	
}
 
 int main ()

{int i;
	for(i=0;i<5;i++)
	add_node();
	reverse();
	show();
	return 0;
}	
	
	
	



