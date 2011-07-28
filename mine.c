#include <stdio.h>
#define N 10
int main(int argc, char const* argv[])
{
    int i;
   // int n;
    //printf("intput number\n");
    //scanf("%d",&n);
    char aaa[N]={0};
    int jiange = 5;
    int jishu = 0;
    int jstj = 0;
    int b=0;
    for (i = 0;jstj<N ; i++) {    
        if (i == N) {
            i=0;
        }
        if(aaa[i]==0)
        {
          jishu++;
         
            if (jstj==N-1) {
                   printf("last num:%d\n",i+1);
                   break;
                   }
        if (jishu == jiange ) {      
            jishu = 0;
            aaa[i] = 1;
            printf("%5dout\n",i+1);
            jstj++;
                
        }else
        {
            printf("%5d",i+1);
        }
            
        }
    }
    return 0;
}
