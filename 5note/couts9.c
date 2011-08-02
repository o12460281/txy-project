#if 0   //can don't use array to do this problem
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int couter=0;
    int i;
    for (i = 0; i < 100; i++) {
        if ((i%10) == 9) {
            couter++;
        }
        if ((i/10) == 9) {
            couter++;
        }
    }
    printf("all include '9' total :%d\n",couter);
   // printf("%d,%d\n",(99%10),(99/10));

    return 0;
}
#endif
#if 0
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int array[100];
    int i;
    int couter = 0;
    int a;
    int b;
    for (i = 0; i < 100; i++) {
        array[i]=i;
    }for (i = 0; i < 100; i++) {
        a = array[i]%10;
        b = (array[i]/10);
        if (a == 9) {
            couter++;
        }
        else if(b == 9)
        {
            couter++;
        }
    }
    printf("total number 9:%d\n",couter);
    return 0;
}
#endif
//#if 
#include <stdio.h>  
#define N 20
#include <stdlib.h>
#include <time.h>
int i;
int j;
void init_array(int *p,int n)
{
    srand(time(NULL));
    for (i = 0; i < n; i++) {
         p[i] = rand()%(n*2);
      
    }
}
void print_array(int *p,int n)
{
    for (i = 0; i < n; i++) {
        if (i%8 == 0) {
            printf("\n");
        }
        printf("%6d",p[i]);
    }
}
void print2_array(int *p,int n)
{
    for (i = 0; i < n; i++)
    {
        if (i%8 == 0) {
            printf("\n");
        }
        if (p[i] != -1)
        {        
        printf("%6d",p[i]);
        }
    }
}
void delete_sameword(int *p , int n)
{
    for (i = 0; i < n-1; i++)
    {
        if (p[i] != -1)
        {
           for(j=i+1;j<n;j++)
           {
            if (p[i]==p[j])
            {
                p[j] = -1;
            }
           }
        }
    }
}
/*   if (n==1) {
     print2_array(p,20);
     return;
    }
    for (i = 0; i < n; i++)
    {
        if (p[n-2]==p[i])
        {
             p[n-2]=-1;
             delete_sameword(p,n-1);
        }
    }
             delete_sameword(p,n-1);
    
}*/

int main(int argc, char const* argv[])
{
    int array[20];
    init_array(array,20);
    print_array(array,20);
    getchar();
    delete_sameword(array,20);
    print2_array(array,20);
    printf("\n");
    return 0;
}
//#endif
