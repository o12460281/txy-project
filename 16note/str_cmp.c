#include <stdio.h>
#include <string.h>
int main(int argc, const char* argv[])
{
	char str1[] = "woai beijing!";
	char str2[] = "woai ni!";
	int a = 0;
	a = strncmp(str1,str2,5);
	printf("%s \n",strcat(str1,str2));
	printf("%d \n",a);
	return 0;
}
