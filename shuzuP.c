/*int array ang point
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int array[5];
    int i;
    for (i = 0; i < 5; i++) {
        array[i]=i;
    }
    int *ptr=&array[0];
  //  ptr=&array[0];
  //  ptr=array;
    for (i = 0; i < 5; i++) {
      //  printf("%4d",*ptr);
        *ptr=i+1;
       // ptr++;
        printf("%d\n",*ptr);
        printf("%d\n",array[i]);
        ptr++;
    }
    return 0;
}*/
/*#include <stdio.h>
int main(int argc, char const* argv[])
{
    
    char array[15];
    array[0]='a';
    char *ptr;
    ptr = &array[0];
    int i;
    for(i=0;i<10;i++)
    {
        *ptr=array[0]+i;
        printf("%c",*ptr++);
    }
    printf("\n");
    return 0;
}*/
#include <stdio.h>
#define N 10
/*int main(int argc, char const* argv[])
{
    char str[N];
    char *p;
    p = str;
    int i;
    for(i=0;i<N;i++)
    {
        *p = 'a'+i;
  //      if (*p=='g') {
    //      *p='\0';
        //  }
        p++;


    }
 //   *p = '\0';
    printf("str[]=%s\n",str);
    return 0;
}*/
int main(int argc, char const* argv[])
{
    char str[]="hello world!";
    char *p=str;
    while(*p!='\0')
        {
            printf("%c",*p++);
            
        }
        printf("\n");
        *p = '\0'; 
     while(p>=str)
     {
        printf("%c",*p--);

     }
    printf("\n");
    return 0;
}
/*int main(int argc, char const* argv[])
{
    char str[13]="hello world!";
    char *p = &str[12];
    for(;p!=str-1;p--)
    {
        printf("%c",*p);
    }
     printf("\n");
    return 0;
}*/


