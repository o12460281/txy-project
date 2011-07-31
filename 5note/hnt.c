#include <stdio.h>
void hnt(char a,char b,char c,int n)
{
    if (n == 1) {
        printf("%c=====>%c\n",a,c);
        return;
    }
    hnt(a,c,b,n-1);
    printf("%c=====>%c\n",a,c);
    hnt(b,a,c,n-1);
   // printf("%c=====>%c\n",b,c);

}
int main(int argc, char const* argv[])
{
    int n = 3;
    hnt('A','B','C',n);
    return 0;
}
