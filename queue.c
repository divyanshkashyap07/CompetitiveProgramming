#include<stdio.h>
#include<stdlib.h>

struct Arrayqueue
{
	int front,back;
	int capacity;
	int *array;
};

struct Arrayqueue* createQueue(int capacity)
{
	struct Arrayqueue* q;
	q=(struct Arrayqueue*)malloc(sizeof(struct Arrayqueue));
	q->capacity=capacity;
	q->front=q->back=-1;
	q->array=(int*)malloc(q->capacity*sizeof(int));
	if (!q->array)
	   return (NULL);
	else
	return q;
}

int isEmpty(struct Arrayqueue* q)
{
	return (q->front==-1);
}

int isFull(struct Arrayqueue* q)
{
	return((q->back+1)%q->capacity==q->front);
}

int Queuesize(struct Arrayqueue* q)
{
	return ((q->capacity-q->front+q->back+1)%q->capacity);
}

void enQueue(struct Arrayqueue* q,int data)
{
	if(isFull(q))
	printf("queue is full");
	else
	{
		q->back=(q->back+1)%q->capacity;
		q->array[q->back]=data;
		if (q->front==-1)
		q->front=q->back;
	}
}

int deQueue(struct Arrayqueue* q)
{
	int data;
	if (isEmpty(q))
	{
	printf("queue is empty");
	return (-1);
	}
	else
	{
	  data=q->array[q->front];
	  if(q->front==q->back)
	    q->front=q->back=-1;
	  else
	   	  	q->front=(q->front+1)%q->capacity;
    }
    return data; 	
}	  

int main()
{

	return 0;
}









