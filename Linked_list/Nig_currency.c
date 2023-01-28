#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program on SINGLY LINKED LIST that shows the connection on Nigerian new Currency
 *
 * Return: 0;
 */
struct myCountry
{
	int currency;
	struct myCountry *link;
};
int main()
{
	struct myCountry *head;

	struct myCountry *coin, *naira, *newNaira;
	
	head = (struct myCountry *) malloc(sizeof(struct myCountry));

	coin = (struct myCountry *) malloc(sizeof(struct myCountry));
	coin->currency = 23;
	coin->link = naira;

	naira = (struct myCountry *) malloc(sizeof(struct myCountry));
	naira->currency = 24;
	naira->link = newNaira;

	newNaira = (struct myCountry *) malloc(sizeof(struct myCountry));
	newNaira->currency = 25;
	newNaira->link = NULL;

	head = coin;
	while (head->link != NULL)
	{
		head = head->link;
		printf("%d -->", head->currency);
	}


}
