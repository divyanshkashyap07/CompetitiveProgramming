#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *link;
};
struct stack *top=NULL;

struct stack *create_stack(int data)
{
	struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
	temp->data=data;
	temp->link=NULL;
	return temp; 
}

int isEmpty()
{
	return(top==NULL);
}

void push(int data)
{
	struct stack *p;
	p=create_stack(data);
	if(top==NULL)
	{
	    top=p;
	}
	else
	{
	p->link=top;
	top=p;
	}
}

void pop()
{
	int t;
	if(isEmpty())
	{
	printf("Stack is empty");
    }
	struct stack *temp;
	temp=top;
	t=temp->data;
	top=top->link;
	printf("%d",t);
}

int main()
{
	push(6);
	push(3);
	pop();
	pop();
	pop();
	return 0;
}


