#include <stdio.h>
#include <stdlib.h>

struct node
{
    int age;
    struct node *link;
};
int main(void)
{
    /* Declare the Head */
    struct node *head;
    head = (struct node *) malloc(sizeof(struct node));
    /* Declare a node */
    struct node *nodeA, *nodeB, *nodeC;

    /* Allocate memory for the node using malloc */
    nodeA = (struct node *) malloc(sizeof(struct node));
    nodeB = (struct node *) malloc(sizeof(struct node));
    nodeC = (struct node *) malloc(sizeof(struct node));
    /* Assign value to the node */
    nodeA->age = 27;
    nodeB->age = 24;
    nodeC->age = 19;

    /* Assigning a link to the node */
    nodeA->link = nodeB;
    nodeB->link = nodeC;
    nodeC->link = NULL;

    /* Create a head */
    head = nodeA;

    /* Traversing the linkes list and printing each member */
    while (head->link != NULL)
    {
	head = head->link;
        printf("%d -->", head->age);
    }
 	printf("%d\n", head->age); 
}
