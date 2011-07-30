#if 0
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int i;
    int j;
    int k;
    int str[10]={2,50,4,5,13,19,0,8,11,10,};
    for (i = 0; i < 10; i++) {
        for(j=i+1;j<10;j++)
        {
            if (str[i] > str[j]) {
                k = str[i];
                str[i]=str[j];
                str[j] = k;
            }
        }
  //        printf("%2d,",str[i]);
    }
    for (i = 0; i < 10; i++) {
            printf("%-3d",str[i]);    
    }
    printf("\n");
    return 0;
}
#endif
#include <stdio.h>
#define N 20
#include <time.h>
#include <stdlib.h>
int i;
int j;
int k;
void difi_fun(int *p,int n)
{
   // int *m = p;
    for (i = 0; i < n; i++) {
      if ((i%8) == 0) {
          printf("\n");
      }
        printf("%7d",p[i]);
     //   return m;
    }
    printf("\n");
}    
void init_fun(int *p,int n)         //random array[]
{
   
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        p[i] = rand()%(n*2);

    }
   // return m;
}
void run_fun(int *p,int n)
{
   // int *m = p;
    int temp;
    for (i = 0; i < n; i++) {                          

           k = i;
        for(j=i+1;j<n;j++)
        {
            if (p[k]>p[j]) {
                k=j;
            }
        }
        if (i != k) {       //*(p+i)==p[i]
            temp = p[i];
            p[i] = p[k];
            p[k] = temp;
        }
        
    }
      //  return m;
}

//void init
int main(int argc, char const* argv[])
{
    int array[N];//={0,24,5,6,78,8,96,5,4,23};
    init_fun(array,N);

    difi_fun(array,N);
    printf("press Enter to start");
    getchar();
    run_fun(array,N);
    difi_fun(array,N);
   /* for (i = 0; i < N; i++) {
        printf("%-3d",array[i]);
    }*/
    printf("\n");
    return 0;
}
