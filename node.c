#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program on how to create a node in a singly linked list
 *
 * Return: 0;
 */

struct node
{
	int data;
	struct node *link;
};
int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;
	
	/**
	current = malloc(sizeof(struct node));
	current -> data = 3;
	current -> link = NULL;*/

	//current -> link -> link = current;
	struct node *current3 = malloc(sizeof(struct node));
	current3 -> data = 26;
	current3 -> link = NULL;
	current -> link = current3;
	
	while (head -> link != NULL)
	{	
		printf("%d-->%d-->%d\n", head -> data, current -> data, current3 -> data);
		current = current -> link -> link;
	}

	return 0;
}
