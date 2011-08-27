#include <stdio.h>
#include "func.h"
int main(int argc,char* argv[])
{
	char a[]="hahlfjdla df";
	printf("a:%s\n",a);
	char b[]="hfad";
	printf("b:%s\n",b);
	char *p = my_strstr(a,b);
	printf("%s\n",p);
	return 0;
}
