#include <stdio.h>
void struct_student(void)
{
	struct student
	{
		int number;
		char name[10];
		int sorce;
		struct student *next;
	};
	typedef struct student STU;
}
