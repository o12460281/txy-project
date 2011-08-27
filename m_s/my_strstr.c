#include <stdio.h>
#include <string.h>	
char *my_strstr(char *ptr,char *q)
{
	int lenth = strlen(q);
	int sum = 0;
	int i,j=0;
	
	for (i = 0; i < strlen(ptr); i++)
	{
		if (ptr[i] == q[j])
		{
			sum++;
			j++;
		}
		else
		{
			sum = 0;
			j = 0;
		}
		if (sum == lenth)
		{
			j = i-lenth+1;
			break;
		}
	}
	return &ptr[j];
}
/*
int main(int argc,char* argv[])
{
	char a[]="hahlfjdla df";
	printf("a:%s\n",a);
	char b[]="fjd";
	printf("b:%s\n",b);
	char *p = my_strstr(a,b);
	printf("%s\n",p);
	return 0;
}
*/
