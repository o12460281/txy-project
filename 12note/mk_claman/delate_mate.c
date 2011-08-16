#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
STU *delate_mate(STU *head)
{
	STU *p = head;
	STU *temp = NULL;
	int number = 0;
	put("who do you want to delate?");
	scanf("%d",&number);
	if (NULL == head)
	{
		printf("empty\n");
		return;
	}
	if (number == head->number)
	{
		head = head->next;
		free(p);
		return head;
	}
	while((p->next != NULL)&&(number != p->next->number))
	{
		p = p->next;
	}
	temp = p->next;
	p->next = p->next->next;
	free(temp);
	return head;
}
