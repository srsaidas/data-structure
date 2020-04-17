#include <stdio.h>
#define STACKSIZE 5
int stack[STACKSIZE];
int top = -1; // Top of the stack
void push(int element)
{//
		if(top == STACKSIZE -1 )
		{
				printf("Stack is full\n");
		}
		else
		{
				stack[++top] = element;
		}
}

int pop(void)
{//
		if(top == -1)
		{
				printf("Stack is Empty");
		}
		else
		{
				return stack[top--];
		}
}

void traverse(void)
{//
		if(top == -1)
		{
				printf("Stack is Empty");
		}
		else
		{
				int i;
				for(i = 0; i <= top; i++)
				{
						printf("%d\n", stack[i]);
				}
		}
}

