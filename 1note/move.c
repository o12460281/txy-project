#include <stdio.h>
/*int main(void)
{
    unsigned int a,b,c;
    a = 26 ;
    b = 30 ;
    c = b&a;
    c = c >> 1;
    printf("%d\n",c);
    return 0;

}*/
int main(int argc, char const* argv[])
{
    unsigned int a = 0xaa;
    unsigned int b = 0x1e;
    unsigned int c = 0;
    c = (a & b);
    c >>= 1;
    printf("%d\n",c);
    return 0;
}
