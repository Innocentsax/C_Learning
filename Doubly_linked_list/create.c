#include <stdio.h>
#include <stdlib.h>

//Struct of the node
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

int main()
{
	//allocating a memory for the node
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 10;
    head->next = NULL;
    //transvering the node
    printf("%d\n",head->data);
    return 0;
}
