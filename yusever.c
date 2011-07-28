#include <stdio.h>
#define N    10 //预处理 
int main(int argc, char const* argv[])
{
    char array[N] = {0};
    int i;
   // int j=0;
    int interval = 4;
    int out_counter = 0;
    int total_number=0;
 
   for(i = 0;total_number<N;i++)        /*控制循环条件的其他因数*/
    {
         if (i == N)                    //持续循环 直到out出只剩下最后一个数      
         {                              
             i = 0;
         }
         if (array[i] == 0) 
         {       
            out_counter++;
            if(out_counter == interval)    
            {
                out_counter=0;
                array[i]=1;
                printf("%6dout\n",i+1);
                total_number++;
               
             //   b--;
            }
            else
            {
                printf("%6d",i+1);
                

            }
         }         
    }
    
    return 0;
}

