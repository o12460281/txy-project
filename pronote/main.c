//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#if 0
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int i;
    printf("%d\n",argc);
    for (i = 0; i < argc; i++) {
        printf("%s\n",argv[i]);
    }
    return 0;
}
#endif
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#if 0
main(int argc,char *argv[])
{
while(argc>1)
    {
    ++argv;
    printf("%s\n",*argv);
    --argc;
    }
}
#endif
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
//#if 1
#include <stdio.h>
void out();
void out()
{
    char str[]="   july hao      hand some !  ";
    int state = 1;
    int i = 0;
    for(;str[i]!='\0';)
    {
        if((state == 0) && (str[i] != ' ')) {  
            printf("%c",str[i]);
            i++;
        }
        if((state == 0) && (str[i] == ' '))
        {
            state = 1;
            printf("%c",' ');
            i++;
        }
        if((state == 1) && (str[i] != ' '))
        {
            state = 0;
            printf("%c",str[i]);
            i++;
        }
        if((state == 1) && (str[i] == ' '))
        {
            i++;
        }
    }
}
int main(int argc, char const* argv[])
{
    out();
    printf("\n");
    return 0;
}

