#include <stdio.h>
#include <stdlib.h>
#define MAX 5

//Write a program to implement a stack in an array stack_arr[] using stack_arr as the top element.
int stack_arr[MAX];
int first = -1; // first replaces the top, because all element must come through the top(first)

void push(int data)
{
	int i;
	first +=1;
	for(i=first; i>0; i--)
		stack_arr[i] = stack_arr[i-1];
	stack_arr[0] = data;
}

void print()
{
	int i;
	if(first == -1)
	{
		printf("stack underflow\n");
		exit(1);
	}
	for(i=0; i<=first; i++)
		printf("%d ", stack_arr[i]);
	printf("\n");
}
int main()
{
	push(30);
	push(90);
	push(40);
	
	print();
	return 0;
}
