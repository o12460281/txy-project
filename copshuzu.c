#include <stdio.h>
#define N 10

//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#if 0
int main(int argc, char const* argv[])
{
    char aaa[]="julywoaini!";
    char bbb[20];
    char *p=aaa;
    char *b=bbb;
    while(*p!='\0')
    {                           //how make other address of string change 
        *b =*p;                             //  (bbb[])
        p++;                      //just difite other point                           
        b++;
    }
    *b = '\0';
   // p = bbb;
   // while(b=='\0')
    printf("%s\n",bbb);
    return 0;
}
#endif
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

#if 0
char *cope_array(char *x,char *y)   //just look as native type
{
    char *m = x;
   //(1) while(*y!='\0')
   // {
     //  *x = *y;            //注意传过来的参数到类型和返回值的类型
     while((*(x++) = *(y++))!= '\0')
     {
       // x++;
       // y++;
     }
    // *x = '\0';
   // return (*x);          //看char *cope 到类型
   return m;
}
int main(int argc, char const* argv[])
{
    char str[]="julywoaini";
    char my[20];
 //   char *a=str;
   // char *b=my;
    cope_array(my,str);
    printf("%s\n",my);
    return 0;
}
#endif
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

#if 0
Is wround  int where(char x,char *p)//char str[int y])
{
    int j=1;

  // for(j=0;j<12;)
   while(*p!='\0')
    {
        if(x == *p++ )
        {
            return j;     //怎样持续查找呢？
            

        }
        else
        {
            j++;
        }
    }
}
int main(int argc, char const* argv[])
{
    char aaa[12]="julywoaini";
    char b='w';
    int c;
    c = where(b,aaa);
    printf("lacation is:%d\n",c);
    printf("aaa[%d]\n",c);
    return 0;
}
#endif
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

int main(int argc, char const* argv[])
{
    char str[]="julywoaini!";
    char *ptr=str;
    int a=1;
    char b;
    printf("intput word:\n");
    scanf("%c",&b);
    while(*ptr != '\0')
    {
        if (*ptr++ == b) {
            printf("str[%d]   ",a);
        }
        a++;
        
    }

    printf("\n");
    return 0;
}
