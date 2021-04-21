#include <stdio.h>

#define MAX 5

struct stack
{
	int array[MAX];
	int top;
};

void init_stack(struct stack *s)
{
	s->top = -1;
}

void push(struct stack *s, int item)
{
	if(s->top == MAX-1)
	{
		printf("Stack is full. Couldn't push '%d' into stack\n", item);
		return;
	}
	s->top++;
	s->array[s->top] = item;
}

int *pop(struct stack *s)
{
	int *data;
	if(s->top == -1)
	{
		printf("Stack is empty\n");
		return NULL;
	}
	data = &s->array[s->top];
	s->top--;
	return data;
}

int main(void)
{
	struct stack s;
	init_stack(&s);
	
	push(&s, 11);
	push(&s, 23);
	push(&s, -8);
	push(&s, 16);
	push(&s, 27);
	push(&s, 14);
	push(&s, 20);
	push(&s, 39);
	push(&s, 2);
	push(&s, 15);
	push(&s, 7);
	
	int *i = NULL;
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	i=pop(&s);
	if(i) { printf("Item popped: %d\n", *i); }
	
	return 0;
}