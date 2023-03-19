#include <stdio.h>
#include <stdlib.h>

//Defining the structure of the node
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

//Adding a node to the empty structure of the node
struct node* addToEmpty(struct node* head, int data)
{
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
}
//Adding a node to the beginning of the node
struct node* addAtBeg(struct node* head, int data)
{
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	
	temp->next = head;
	head->prev = temp;

	head = temp;
	return head;
}

int main()
{
	//Declaring the head
	struct node* head = NULL;
	//Declaring a pointer to the node
	struct node* ptr;
	//calling the 2 structures declared above
	head = addToEmpty(head, 45);
	head = addAtBeg(head, 34);

	ptr = head;
	//transvering the node
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	return 0;
}
