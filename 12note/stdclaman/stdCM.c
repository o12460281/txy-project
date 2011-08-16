#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student 
{
    int number;
    char name[10];
    int sorce;
    struct student *next;
};
typedef struct student STU;
STU *add_mate(STU *head)
{
    STU *p_a = NULL;
    STU *p = head;
    p_a = malloc(sizeof(STU));
    if (NULL == p_a)
    {
        perror("malloc");
        exit(0);
    }
    puts("input his/her number!");
    scanf("%d",&p_a->number);
    puts("and his/her name!");
    scanf("%s",p_a->name);
    puts("how many sorce?");
    scanf("%d",&p_a->sorce);
    getchar();
    p_a->next = NULL;
    if (NULL == head)
    {
        return p_a;
    }
    if (p_a->number < head->number)
    {
        p_a->next = head;
        return p_a;
    }
    while((p->next != NULL)&&(p_a->number > p->next->number))
    {
        p = p->next;
    }
    p_a->next = p->next;
    p->next = p_a;
    return head;
}
STU *delate_mate(STU *head)
{
    STU *p = head;
    int num = 0;
    STU *temp = NULL;
    printf("who do you want to delate?\n");
    scanf("%d",&num);
    getchar();
    if (NULL == head)
    {
        printf("***********************************\n");
        printf("empty\n");
        printf("***********************************\n");
        return;
    }
    if (num  == head->number)
    {
        head = head->next;
        free(p);
        return head;
    }
    while((p->next != NULL)&&(num != p->next->number))
    {
        p = p->next;
    }
    if (p->next == NULL)
    {
        printf("************************************\n");
        printf("!NO THIS MATE!\n");
        printf("************************************\n");
        return head;
    }
    temp = p->next;
    p->next = p->next->next;
    free(temp);
    return head;
    
}
void show_date(STU *head)
{
    STU *p = head;
    if (NULL == head)
    {
        printf("***************************************\n");
        printf("empty\n");
        printf("***************************************\n");
        return;
    }
    printf("number     name     sorce\n");
    while(p != NULL)
    {
        printf("%d         %s        %10d\n",p->number,p->name,p->sorce);
        p = p->next;
    }
}
void save_date(STU *head)
{
    STU *p = head;
    FILE *fp = fopen("1.txt","w+");
    while(p != NULL)
    {
        fprintf(fp, "%d    %s    %d\n",p->number,p->name,p->sorce);
        p = p->next;
    }
    fclose(fp);
}
STU *read_file(void)
{
    int inum = 0;
    int isorce = 0;
    char iname[10];
    FILE *fp = fopen("1.txt","r+");
    STU *head = NULL;
    STU *p = NULL;
    head = p = malloc(sizeof(STU));
    if (NULL == head)
    {
        perror("read file");
        exit(0);
    }
    if (fscanf(fp,"%d%s%d",&inum,iname,&isorce) != EOF)
    {
        p->number = inum;
        strncpy(p->name,iname,9);
        p->sorce = isorce;
    }
    p->next = NULL;
    while(fscanf(fp,"%d%s%d",&inum,iname,&isorce) != EOF)
    {
        p->next = malloc(sizeof(STU));
        if (NULL == p->next)
        {
            perror("read file2");
            exit(0);
        }
        p->next->number = inum;
        strncpy(p->next->name,iname,9);
        p->next->sorce = isorce;
        p = p->next;
    }
    fclose(fp);
    return head;
}
void menu(void)
{
    puts("**   1.add    **\n");
    puts("**   2.delate **\n");
    puts("**   3.show   **\n");
    puts("**   4.save   **\n");
    puts("**   5.quit   **\n");
}
int main(int argc, const char* argv[])
{
    STU *head = NULL;
    char choice;
    head = read_file();
    int flag = 1;
    while(flag)
    {
        printf("Please choice:\n");
        menu();
        choice = getchar();
        getchar();
        switch(choice)
        {
             case '1' : head = add_mate(head);break;
             case '2' : head = delate_mate(head);break;
             case '3' : show_date(head);break;
             case '4' : save_date(head);break;
             case '5' : flag = 0;break;
             default :printf("sorry no this choice!\n");break;
        }
    }
    return 0;
}
