#include<iostream>
#include<stdlib.h>
using namespace std;


struct arraystack
{
	int top;
	int capacity;
	int *array;
};

struct arraystack* createstack(int cap)
{
	struct arraystack* stack;
	stack=(struct arraystack *)malloc(sizeof(struct arraystack));
	stack->capacity=cap;
	stack->top=0;
	stack->array=(int*)malloc(sizeof(int)*stack->capacity);
	return(stack);  
}

int full(struct arraystack *stack)
{
	if(stack->top==stack->capacity-1)
	return 1;
	else
	return 0;
}

int empty(struct arraystack *stack)
{
	if (stack->top==0)
	return 1;
	else 
	return 0;
}

void push(struct arraystack *stack,int item)
{
	if(!full(stack))
    {
		stack->top++;
		stack->array[stack->top]=item;
	}
}

int pop (struct arraystack *stack)
{
	int item;
	if (!empty(stack))
	{
		item=stack->array[stack->top];
		stack->top--;
		return item;
	}
	else
	return -1;
}

void getmin(struct arraystack *stack)
{
	int p;
	p=stack->array[1];
	for(int i=2;i<stack->top+1;i++)
	{
		if(p>stack->array[i])
		{
			int temp;
			temp=p;
			p=stack->array[i];
			stack->array[i]=temp;
		}
		
	}
	cout<<p<<endl;
}

int main()
{
	struct arraystack *stack;
	stack=createstack(4);
	int p,item;
	while (1)
	{
		cout<<"1 push"<<endl;
		cout<<"2 pop"<<endl;
		cout<<"3 exit"<<endl;
		cout<<"enter choice"<<endl;
		cin>>p;
		switch(p)
		{
			case 1:
			cout<<"enter a number"<<endl;
		    cin>>item;
		    push(stack,item);
		    break;
		    
		    case 2:
		    	item=pop(stack);
		    	if (item==-1)
		    	cout<<"stack is empty"<<endl;
		    	else
		    	cout<<"value popped="<<item<<endl;
		    	break;
		    	
		    case 3:
		    	getmin(stack);
		    	return 0;
		}
		
	}
	

}

