#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char* argv[])
{
/*aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    FILE *fp = NULL;
    fp = fopen("1.txt","r+");
    char str[1024]="I like program!";
    char r_str[1024]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if (fp == NULL)
    {
        perror("open file");
        exit(0);
    }
    int n = 0;
    fwrite(str,1,strlen(str),fp);
    fseek(fp,0,SEEK_SET);
   // fread(r_str,1,1023,fp);
    n = fread(r_str,1,1023,fp);
    r_str[n] = '\0';
    printf("%s\n",r_str);*/
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa    
/*    int i = 0;
    while(str[i]!='\0')
    {
        putc(str[i],fp);
        i++;
    }
  //  rewind(fp);
    fseek(fp,0,SEEK_SET);
    i = 0;
    while((r_str[i]=getc(fp)) != EOF)
    {
        i++;
    }
    r_str[i]='\0';
    printf("%s\n",r_str);*/
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    FILE *fp0 = NULL;
    FILE *fp1 = NULL;
    fp0 = fopen("1.txt","r+");
    fp1 = fopen("2.txt","a");
    char w_str[1024]={0};
    fread(w_str,1,1023,fp0);
    fwrite(w_str,1,strlen(w_str),fp1);
    return 0;
}
