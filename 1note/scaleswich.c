/*#include <stdio.h>
my way but it is wrond
int main(void)
{
    int a =? ;
    for (i = 0; i < ; i++) {
  
    int i;    
    for (i = 0; a!=0; i++) {
       i=a%2;
       a=a/2;
       printf("%d",i);
        
    }
   printf("\n"); 

    
    return 0;
}*/
/*mate way
#include <stdio.h>
#include <math.h>
int main(int argc, const char *argv[])
{
unsigned char m = 9;

    int n = 0;
    int a;
    int i;
        for (i = 0; i < 8; i++)
        {
        a = 0x80 >> i ;

        n = (m & a) >> (7-i);
              
              printf("%d",n);
              n=0;
              }
              printf("\n");
              return 0;
              }*/
/*No.2 十六进制转换成二进制数
#include <stdio.h>
int main(void)
{
    unsigned int a = 0x556677aa;
    unsigned int mask = (1 << 31);
    int i;
    //for (i = 0; i < 32; i++)
    for(;mask > 0;)
    {
        printf("%c",((a & mask)>0) ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
  

    
    return 0;
}*/

//十进制数转换成十六进制数
#include <stdio.h>
int main(int argc, char const* argv[])
{
    unsigned int a = 0x445588dd;
    unsigned int mask = 0x0f;
    unsigned int i;
    unsigned int move = 28;
    char str[17]="0123456789abcdrf";
    printf("0x");
    for (i = 0; i < 8; i++) {
       printf("%c",str[((a >> move) & mask)]);
       move -= 4;
    }
    printf("\n");
    return 0;
}
/*net way
#include <stdio.h>

int main()
{
int a = 255;
int count = 0;
char array[10];

int i = 0;

while (a > 0)
{
if ((a % 16) > 9)
{
array[i] = a % 16 + '0' + 39;
}
else
{
array[i] = a % 16 + '0';
}


a = a / 16;

i++;
}

for (i = i - 1; i >= 0; i-- )
{
printf("%c", array[i]);
}

return 0;
}*/

