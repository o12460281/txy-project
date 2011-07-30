#include <stdio.h>
#include <string.h> 
int main(int argc, char const* argv[])
{
    char str[]="julyhello";
    char *p;
   //? strcpy(str,"he",2);
   printf("%s\n",strstr(str,"l"));
   printf("%s\n",strchr(str,'l'));
    return 0;
}
