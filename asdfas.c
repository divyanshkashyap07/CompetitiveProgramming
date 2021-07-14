#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *START=NULL,*START1=NULL,*START2=NULL;


struct node* createnode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return (n);
}

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
 
 void add_node1()
{
     struct node *temp,*p;
     temp=createnode();
	 temp->link=NULL;
     if (START1==NULL)
         START1=temp;
         
     else
        {
        	p=START1;
        	while(p->link!=NULL)
        	 p=p->link;
        	 p->link=temp;
		}
 }

void add_node2()
{
     struct node *temp,*p;
     temp=createnode();
     scanf("%d",&temp->info);
	 temp->link=NULL;
     if (START2==NULL)
         START2=temp;
         
     else
        {
        	p=START2;
        	while(p->link!=NULL)
        	 p=p->link;
        	 p->link=temp;
		}
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

void show1()
{
	struct node * t;
	t=START1;
	while(t->link!=NULL)
{
		printf("%d\n",t->info);
	t=t->link;
	}printf("%d",t->info);
	
}

void LL1()
{
	struct node *p,*t=START;
    struct node *x=START1;	
	int data,i;
	while(x)
	{
	p=t;
	data=0;
	for(i=0;i<2;i++)
	 { 
		data=data+p->info;
		p=p->link->link;
	
	 }
	 x->info=data;
	 x=x->link;
	 t=t->link->link;
    }
}
 
 int main ()

{int i;
	for(i=0;i<6;i++)
	{
	
	add_node();
	
    }
    for(i=0;i<3;i++)
    {
    add_node1();
    }
	show();
	LL1();
	show1();
	return 0;
}	
	
	
	



