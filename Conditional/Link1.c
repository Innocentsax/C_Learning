#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};
typedef struct node inno;

int main(void)
{
	inno *n1, n2, n3;
	inno *head;
	
	n1 = malloc(sizeof(inno));
	// Lets declare Values
	n1->value = 24;
	n2.value = 45;
	n3.value = 39;

	//Link them up
	head = n1;
	n3.next = NULL;
	n2.next = &n3;
	n1->next = &n2;

	inno n4;
	n4.value = 27;
	n4.next = &n2;
	n1->next = &n4;
	
	inno n5;
	n5.value = 100;
	n5.next = &n3;
	n2.next = &n5;


	inno *temp = head;
	while (temp != NULL)
	{
		printf("%d -->", temp->value);
		temp = temp->next;
	}
	printf("\n");

	return 0;
}
