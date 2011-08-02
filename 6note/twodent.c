#if 0
#include <stdio.h>
#define N 10
#define M 8
int main(int argc, char const* argv[])
{
    int array[M][N];
    int (*p)[N];
    p = array;
    printf("%p\n",p);
    printf("%p\n",p[0]);
    printf("%p\n",p[1]+1);
    printf("%p\n",p[2]+2);
   // printf("%p\n",&(*p)[1]);
   /* for (i = 0; i < M; i++)
    {
        for(j=0;j<N;j++)
        {
        //    (*p)[i]+j=a;
           (*(p+1))+j=a;
            printf("%4d",(*(p+1))+j);
            a++;
        }
    }*/
    return 0;
}
#endif
//ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
#define M 8
int i;
int j;
#if 0
//void init_array(int *p)
int main(int argc, char const* argv[])
{
    int array[M][N];
    int (*p)[N];
    p = array;
    int temp;
    int i;
    int j;
    srand=(time(NULL));
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            array[i][j]=rand()%(N*2);
        }
    }
    for (i = 0; i < M; i++)
    {
        for(j = 1;j < N;j++)
        {
            if (p[i]+0 > p[i]+j)
            {
                temp=p[i];
                p[i]=p[i]+j;
                p[i]+j=temp;
            }
           
                          
            
        }
        for (j = 0; j < N; j++)
        {
            printf("%4d"p[i]+j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
#endif
//ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
void init_array(int *p,int n)
{
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        p[i]=rand()%(100);
    }
}
void print_array(int *p,int n)
{
    for (i = 0; i < n; i++)
    {
        if (i%N==0)
        {
            printf("\n");
        }
        printf("%4d",p[i]);
    }
}
void sort_array(int *p,int n)
{
    int temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
         if (p[i]>p[j])
         {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
         }
        }
    }
}
int main(int argc, char const* argv[])
{
    int array[M][N];
    int *p = NULL;  //int(NULL)=0
    p = &array[0][0];
    init_array(p,M*N);
    print_array(p,M*N);
    getchar();
    sort_array(p,M*N);
    print_array(p,M*N);
    printf("\n");
    return 0;

}
