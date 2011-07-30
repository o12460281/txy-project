#include <stdio.h>
#include <string.h> 
int main(int argc, char const* argv[])
{
    char str[]="julyhello";
    char *p;
    p = strstr(str,"he");
    strcpy(*p,"he",2);
    printf("%s\n",str);
    //char strstr(*p,a)
   // printf("%c\n",strstr(*p,a));
    return 0;
}
