#ifndef _MAIN_H_
#define _MAIN_H_

/* Template for our node */
struct node 
{
	int age;
	struct node *link;
};
void insert_begin(struct node **head, int num);
#endif
