#include <stdio.h>
#include <stdlib.h>

struct test
{
	int num;
	struct test *link;
};
int main(void)
{
	struct test *head;
	struct test *testA, *testB, *testC;

	head = (struct test *) malloc(sizeof(struct test));
	testA = (struct test *) malloc(sizeof(struct test));
	testB = (struct test *) malloc(sizeof(struct test));
	testC = (struct test *) malloc(sizeof(struct test));

	testA->num = 200;
	testB->num = 500;
	testC->num = 1000;

	testA->link = testB;
	testB->link = testC;
	testC->link = NULL;

	head = testA;

	while (head->link != NULL)
	{
		head = head->link;
		printf("%d -->", head->num);
	}
	printf("%d", head->num);
	printf("\n");



}
