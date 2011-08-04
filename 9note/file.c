#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char* argv[])
{
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
/*    FILE *fp = NULL;
    char a_str[1024]={0};
    fp = fopen("1.txt","r");
    if (fp == NULL)
    {
        perror("main");
        exit(0);
    }
   // fscanf(fp,"%s",a_str);
    fgets(a_str,1023,fp);
    printf("%s\n",a_str);
    fclose(fp);*/
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa    
/*    FILE *fp = NULL;
    char str[100] = "I like this program!";
    printf("%s\n",str);
    fp = fopen("/home/akaedu/txy-project/2.txt","w+");
    if (fp == NULL)
    {
        perror("open");
        exit(0);
    }
    fprintf(fp,"%s\n",str);
    fclose(fp);*/
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa    
#if 0
FILE *fp = NULL;
    char str[100]="I like xiaoyu!";
    char a_str[1024]={0};
    gets(a_str);
    puts(a_str);
//    puts(str);
/*    fp = fopen("1.txt","r");
    if (NULL == fp)
    {
        perror("puts");
        exit(0);
    }
   // fputs(str,fp);
    fgets(a_str,1023,fp);
    printf("%s\n",a_str);
    fscanf(fp,"%s",a_str);
    printf("%s\n",a_str);
    fclose(fp);*/
#endif
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa  
/*    FILE *fp = NULL;
    char a_str[1024]={0};
    fp = fopen("1.txt","r+");
    if (fp == NULL)
    {
        perror("main");
        exit(0);
    }
       fscanf(stdin,"%s",a_str);
       fprintf(stdout,"%s\n",a_str);
 //2.   fgets(a_str,1023,stdin);
 //     fputs(a_str,stdout);*/
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    FILE *fp = NULL;
    char str[100]="I like xiaoyu!";
    char r_str[100]={0};
    fp = fopen("3.txt","r+");
    if (NULL == fp)
    {
        perror("puts");
        exit(0);
    }
    int i = 0;
    while((r_str[i] = getc(fp)) != EOF)
    {
        i++;
    }
    r_str[i]='\0';       //putc don't add '\0',must notice
    printf("%s\n",r_str);
/*    while(str[i] != '\0')
    {
        putc(str[i],fp);
        i++;
    }
         */
   fclose(fp);
   return 0;

}
