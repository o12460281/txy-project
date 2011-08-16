#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
STU *add_mate(STU *head)
{
	STU *p = head;
	STU p_a = NULL;
	p_a = malloc(sizeof(STU));
	if (NULL == p_a)
	{
		perror("malloc");
		exit(0);
	}
	put("please input his/her number!");
	scanf("%d",&p_a->number);
	put("and his/her name!");
	scanf("%s",p_a->name);
	put("how many sorce?");
	scanf("%d",&p_a->sorce);
	p_a->next = NULL;
	if (head == NULL)
	{
		printf("empty\n");
		return p_a;
	}
	if (p_a->number < head->number)
	{
		p_a->next = head;
		return p_a;
	}
	while((p->next != NULL)&&(p_a->number < p->next->number))
	{
		p = p->next;
	}
	p_a->next = p->next;
	p->next = p_a;
	return head;
}
