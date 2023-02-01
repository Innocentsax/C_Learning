#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"

void insert_begin(struct node **head, int num)
{
	/* Create a new node */
	struct node *newNode;

	newNode = (struct node *) malloc (sizeof(struct node));
	
	if (newNode == NULL)
	{
		return;
	}

	newNode->age = num;

	if (*head == NULL) //Check if list is empty when the head is equal null
	{
		newNode->link = NULL;
	}
	else
	{
		/* Point the next of the new node to what head was pointing to */
		newNode->link = *head;
	}


	/* Redirect head to point to new node */
	*head = newNode;

	printf("@iamINNOCENT.UDO.. I do hard things with Singly Linked List..>");
}
