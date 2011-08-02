#include <stdio.h>
int main(int argc, char const* argv[])
{
/*    int a = 3;
    int b = 4;
//判断 语句    
    if (a>b)
    {
        printf("da\n");
    }else if (a==b) {
        printf("deng");
    }else
    {
        printf("xiao");
    }
    switch(a)
    {
        case 1 :    break;
        case 2 :    break;
        case 3 :    break;
        default :   break;
    }*/

//循环 语句
    int i;
    for (i = 1/*一开始执行，只执行一次*/; i < 100; i++) {
        printf("%4d",i);
        if (i%5==0) {
            printf("\n");
        }
    }
   // printf("\n");
    i = 0;
/*    while(i < 100)
    {
        printf("%4d",i);
        i++;
    }*/
    printf("\n");
    return 0;
}
