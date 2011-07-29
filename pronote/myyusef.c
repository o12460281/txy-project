#include <stdio.h>
#define N 20
int main(int argc, char const* argv[])
{
//    int n;
  //  printf("intput number:\n");
  //  scanf("%d",&n);
    int array[N]={0};
   // int *p=array;
    int space = 4;
    int counter = 0;
    int total_number = 0;
    int i;
    for (i = 1; total_number < N; i++) 
    {   
        if (i == N) {
           i = 1;
        }
        if( array[i] == 0)
        {
          counter++;
        /* if (total_number==N-2) {
            printf("last num is %d\n",i);
            break;
         }*/
         if (counter == space) {
            counter = 0;
            array[i] = 1;
            printf("%4d",i);
            total_number++;
            if (total_number == N-2) {
                printf("\n");
                for(i=1;i<N;i++)
                {
                    if(array[i] == 0)
                    {
                          printf("last num:%d\n",i);
                    }
                          

                }
         /*    if (array[i+1]==1) {

                printf("last num:%d\n",i-1);
                break;
             }
             else
             {
                printf("last num:%d\n",i+1);
                break;
             ;}*/
             break;

            }
         }
     /*    else
         {
            printf("%5d",i);
         }*/
        }
    }
    printf("\n");
    return 0;
}
