#include <stdio.h>
#include <stdlib.h>
#define MAX 4

// Write a program to PUSH an element onto Stack
//int stack_arr[4]; //Global Declaration of stack 1
int stack_arr[MAX]; // Global Declaration of stack 2
int top = -1; // top = -1 indicates that the stack is empty

void push(int data)
{
	if(top == MAX - 1)
	{
		printf("Stack overflow");
		return;//indicate the end of the function
	}
	top = top + 1;
	stack_arr[top] = data;
}
void print()
{
	for(int i = 0; i <=top; i++)
		printf("%d ",stack_arr[i]);
	printf("\n");
}
int main()
{
	
	push(1); // Recall: pushing an element involve two steps: 1 increment the variables top by 1 and 2, store the value at the index top
	push(3);
	push(5);
	push(7);
	print();
}
