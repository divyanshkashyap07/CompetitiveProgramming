#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};
struct node *head=NULL;

void addnode()
{
	struct node *t,*p=(struct node*)malloc(sizeof(struct node));
	printf("Enter value");
	scanf("%d",&p->info);
	p->next=p;
	if(head==NULL)
	{
		head=p;
	}   
	else
	{
		t=head;
		while(t->next!=head)
		t=t->next;
		t->next=p;
		p->next=head;		
	}
}

void show()
{
	struct node *temp;
	temp=head;
	while(temp->next!=head)
	{
		printf("%d",temp->info);
		temp=temp->next;				
	}
	printf("%d",temp->info);
}

void first_and_last()
{
	struct node *current,*prev;
	prev=head;
	while(prev->next->next!=head)
	{
		prev=prev->next;
	}
	current=prev->next;
	prev->next=current->next;
	current->next=head->next;
	head->next=current;
	head=current;
}

void jossepher()
{
	int i,j;
	printf("enter value to del");
	scanf("%d",&j);
	struct node *t;
	while(head->next!=head)
	{
		t=head;
		if(head->next->next!=head)
		{
			for(i=1;i<j;i++)
			{
				t=t->next;
			}
			t->next=t->next->next;
			head=t->next;
		}
		else 
		{
			for(i=1;i<j-1;i++)
			{
				t=t->next;
			}
			t->next=t;
			head=t;
		}
	}
printf("%d",head->info);	
}

int main()
{
	int i;
	for(i=0;i<5;i++)
	addnode();
	jossepher();
	return 0;
}
