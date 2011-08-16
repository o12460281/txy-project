#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
typedef struct student STU;
int main(int argc, const char* argv[])
{
	STU *head = NULL;
	char choice;
	int flag = 1;
	put("please choice:");
	choice = getchar();
	getchar();
	while(flag)
	{
	switch(choice)
	{
		case '1' : head = add_mate(head);break;
		case '2' : head = delate_mate(head);break;
		case '3' : show_date(head);break;	
	//	case '4' : save_date(head);break;
		case '5' : flag = 0;break;
		default :printf("sorry NO this choice,ARE YOU OK?\n");
	}
	}
	return 0;
}
