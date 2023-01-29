#include <stdio.h>
#include <stdlib.h>
struct node
{
	int value;
	struct node *next;
};
typedef struct node inno;

inno *create_new_node(int value)
{
	inno *result = malloc(sizeof(inno));
	result->value = value;
	result->next = NULL;

	return result;
}

void printlist(inno *head)
{
	inno *temp = head;
	while (temp != NULL)
	{
		printf("%d -->", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	inno *head = NULL;
	inno *temp;

	for(int i = 0; i < 25; i++)
	{
		temp = create_new_node(i);
		temp->next = head;
		head = temp;
	}
	
	printlist(head);

	return 0;
}
