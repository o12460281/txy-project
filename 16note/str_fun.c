/*some string function operate*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char* argv[])
{
	char str[]="gcc main.c -o main woaini  ss";
	char *p[6];
	int i = 0;
	p[0] = strtok(str," ");
	for (i = 1; i < 6; i++)
	{
		p[i] = strtok(NULL," ");
	}
	for (i = 0; i < 6; i++)
	{
		printf("%s ",p[i]);
		printf("%d  ",strlen(p[i]));
	}
	printf("\n");

	return 0;
}
