#include <stdio.h>

#define STACKSIZE 10

char top = -1;
char stack[STACKSIZE];


char top()
{
		if (top == -1)
		{
				printf("Stack is empty \n");
				return 0;
		}

		return stack[top];
}

void push(char data)
{
		if(top == STACKSIZE -1)
		{
				printf("Stack is full\n");
		}
		else
		{
				stack[++top] = data;
		}
}


void pop()
{
		if(top == -1)
		{
				stack
		}
}


int main()
{

}
