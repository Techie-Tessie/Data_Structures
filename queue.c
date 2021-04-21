#include <stdio.h>

#define MAX 5

int array[MAX];
int front = -1, rear = -1;

void enqueue(int *array, int item, int *pfront, int *prear)
{
	if(*prear == MAX-1)
	{
		printf("Queue is full\n");
		return;
	}
	else
	{
		printf("Enqueuing: %d\n", item);
		(*prear)++;
		array[*prear] = item;
		
		if(*pfront == -1)
		{
			*pfront = 0;
		}
	}
}

int empty(int *pfront)
{
	if(*pfront == -1)
	{
		printf("Queue is empty\n");
		return 1;
	}
	else
	{
		return 0;
	}
}

int dequeue(int *array, int *pfront, int *prear)
{
	int data = array[*pfront];
	printf("Dequeueing: %d\n", data);
	
	array[*pfront] = 0;
	
	if(*pfront == *prear)
	{
		*pfront = *prear = -1;
	}
	else
	{
		(*pfront)++;
	}
	return data;
}

int main()
{
	int array[MAX];
	int front = -1, rear = -1;
	
	enqueue(array, 23, &front, &rear);
	enqueue(array, 9, &front, &rear);
	enqueue(array, 11, &front, &rear);
	enqueue(array, -10, &front, &rear);
	enqueue(array, 25, &front, &rear);
	enqueue(array, 16, &front, &rear);
	enqueue(array, 17, &front, &rear);
	enqueue(array, 22, &front, &rear);
	enqueue(array, 19, &front, &rear);
	enqueue(array, 30, &front, &rear);
	enqueue(array, 32, &front, &rear);
	
	int i;
	for(int index=0; index<MAX; index++)
	{
		if(!empty(&front))
		{
			i = dequeue(array, &front, &rear);
			printf("Receieved Dequeued item: %d\n", i);
		}
	}
	
	return 0;
}