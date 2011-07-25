#define HOW_MANY_TIMES_TO_SAY_HELLO 3
#include<stdio.h>
void say_three_hi()
{
    int j;
    for (j = 0;j<HOW_MANY_TIMES_TO_SAY_HELLO; j++)
    {
        printf("hello everyone!\n");
    }
}

