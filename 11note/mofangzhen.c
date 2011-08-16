/*#include <stdio.h> 
int main()
{ 
    int n; 
    int a[31][31]; 
    while(scanf("%d",&n)!=EOF)
    {
        int m=1;
        int i=0;
        int j=(n-1)/2;
        while(m<=n*n)    
        {
            
            a[i][j]=m;    
            m++;
            i--;
            j++;    
            if((m-1)%n==0&&m>1)    
            {
                i=i+2;
                j=j-1; 
            }
            if(i<0) i=i+n; 
            if(j>(n-1)) j=j-n; 
        } 
        for(i=0;i<n;i++) 
        {
            for(j=0;j<n;j++)    
            { 
                printf("%4d",a[i][j]);
                if(j==(n-1))
                    printf("\n");
            } 
        }
    }
    return 0;
}*/
/*
我结合   whq263(玄豹）和jixingzhong(瞌睡虫)   做了只有奇数的。偶数的做不出来。

#include   <stdio.h>
#define     MAX     30

void   main()
{
      int   magic[MAX][MAX];
      int   i,   j,   row,   col;
      int   count,   size;

      printf( "Please   input   a   size:   ");
      scanf( "%d ",   &size);
      if(   size <1   ||   size> MAX   )
      {
            printf( "The   size   is   overload!\n ");
      }
      else   if(   size%2   ==0   )
      {
            printf( "Input   size   is   enve!\n ");
      }
      else
      {
            for(   i=0;   i <size;   i++   )
                  for(   j=0;   j <size;   j++   )
                        magic[i][j]   =   0;
            magic[0][size/2]   =   1;
            i   =   0;
            j   =   size/2;
            for(   count=2;   count <=size*size;   count++   )
            {
  if(i==0)
                  i=size-1;
  else
  i=i-1;
          if(j==0)
          j=size-1;
          else
  j=j-1;
  if(magic[i][j])
  {
  magic[row+1][col]   =   count;
  i=row+1;
  j=col;
  }  
 
  else  
{
  magic[i][j]   =   count;
}
  row=i;
  col=j;
            }
      }
      printf( "The   magic   square   is:\n ");
      for(   i=0;   i <size;   i++   )
            for(   j=0;   j <size;   j++   )
            {
                    printf( "%5d ",   magic[i][j]);
                    if(   j==size-1   )
                          printf( "\n\n ");
              }
} 
*/
#include <stdio.h>
int main(int argc, const char* argv[])
{
    int array[7][7];
    int i,j,k,m;
    i=1;j = (7/2);
    a[i][j]=1;
    k = i;
    m = j;
    for (i = 2; i <= 49; i++)
    {
        
    }
    return 0;
}
