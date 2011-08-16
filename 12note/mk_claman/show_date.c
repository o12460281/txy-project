#include <stdio.h>
#include "struct"
void show_date(STU *p)
{
	printf("******************************************\n");
	printf("number    name      sorce\n");
	while(p != NULL)
	{
		printf("%d    %s     %d\n",p->number,p->name,p->sorce);
	p = p->next;
	}
	printf("******************************************\n");
}
