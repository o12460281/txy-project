#include <stdio.h>
#include "prin.h"

int main(int argc, const char* argv[])
{
	printf("please input two number\n");
	int a ,b,c;
	scanf("%d%d",&a,&b);
	print_hello();
	c = compere(a,b);
	printf("max = %d\n",c);
	return 0;
}
