
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int a = 6;
    int b = 4;
    int *p = &a;

    printf("a=%x\n",a);
    printf("&a=%x\n",&a);
    printf("p=%x\n",p);
    printf("*p=%x\n",*p);
    printf("&p=%x\n",&p);
    return 0;
}
