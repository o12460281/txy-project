#include <stdio.h>
int main(int argc, char const* argv[])
{
    int array[5];
    int i;
   /* for (i = 0; i < 5; i++) {
        array[i]=i;
    }*/
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
}
