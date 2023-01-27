#include <stdio.h>
#include <stdlib.h>

struct node
{
    int age;
    struct node *link
}
int main(void)
{
    /* Declare the Head */
    struct node *head;
    /* Declare a node */
    struct node *nodeA, nodeB, nodeC;

    /* Allocate memory for the node using malloc */
    nodeA = (struct node *) malloc(sizeof(struct node))
    nodeB = (struct node *) malloc(sizeof(struct node))
    nodeC = (struct node *) malloc(sizeof(struct node))
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

    /* Create a temporal pointer */
    temp = head;

    /* Traversing the linkes list and printing each member */
    while (temp->next != NULL)
    {
        printf("%d -->", temp->age);
        temp = temp->next;
    }
    printf("%d -->\n", temp->age);

}