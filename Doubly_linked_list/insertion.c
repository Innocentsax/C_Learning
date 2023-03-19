#include <stdio.h>
#include <stdlib.h>

//Defining the structure of the node
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
//adding a node to the empty structure
struct node* addToEmpty(struct node* head, int data)
{
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
}

int main()
{
	//Declaring the head
	struct node* head = NULL;
	head = addToEmpty(head, 45);
	//Transvering the node
	printf("%d\n", head->data);
	return 0;
}
