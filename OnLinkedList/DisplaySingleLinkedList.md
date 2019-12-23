# Code to Create Display Single Linked List

```c
/*
 ============================================================================
 Name        : DisplayLinkedList.c
 Author      : Deepak Mane
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node *next;
}*first;

void create(int A[], int n)
{
	int i;
	struct Node *t, *last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;

	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}


void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d\n", p->data);
		p=p->next;
	}
}


int main(void) {

	int A[]={3, 5, 7, 10, 15};

	create(A,5);

	Display(first);

	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

```
