#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
    int number;
    char name[10];
    struct stu *next;

};
typedef struct stu STU;
STU *add_node(STU *head)
{
    STU *ptr = head;
    STU *p = NULL;
    p = malloc(sizeof(STU));
    if (NULL == p)
    {
        perror("add");
        exit(0);
    }
    printf("please input number\n");
    scanf("%d",&p->number);
    puts("and input name");
    scanf("%s",p->name);
    getchar();
    p->next = NULL;
    if (NULL == head)
    {
        return p;
    }
    if (p->number < head->number)
    {
        p->next = head;
        return p;
    }
    while((ptr->next != NULL)&&(p->number > ptr->next->number))
    {
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next = p;
    return head;
   
}
STU *delate_node(STU *head)
{
    if (NULL == head)
    {
        printf("empty\n");
        return head;
    }
    STU *ptr = head;
    int number = 0;
    STU *temp = NULL;
    puts("who do you want to delate!");
    scanf("%d",&number);
    getchar();
    if (number == head->number)
    {
          head = head->next;
          free(ptr);
          return head;
    //    return head->next;
    }
    while((ptr->next != NULL)&&(number != ptr->next->number))
    {
        ptr = ptr->next;
    }
    if (ptr->next == NULL)
    {
        printf("sorry no this number,please try again\n");
    }
    else
    {
        temp = ptr->next;
        ptr->next = ptr->next->next;
        free(temp);
    }
    return head;
}
void show_link(STU *head)
{
    if (NULL == head)
    {
        printf("empty\n");
        return;
    }
    STU *ptr =head;
    puts("******************************************");
    puts("number     name");
    while(ptr != NULL)
    {
        printf("%-2d        %s\n",ptr->number,ptr->name);
        ptr = ptr->next;
    }
    puts("******************************************");

}
void save_node(STU *head)
{
    STU *ptr = head;
    FILE *fp = NULL;
    fp = fopen("1.txt","w+");
    if (NULL == fp)
    {
        perror("file");
        exit(0);
    }
    while(ptr != NULL)
    {
        fprintf(fp,"%d",ptr->number);
        fprintf(fp,"    %s\n",ptr->name);
        ptr = ptr->next;
    }
    fclose(fp);
}
void menu(void)
{
    printf("Please choice:\n");
    printf("   1.add node\n");
    printf("   2.delate node\n");
    printf("   3.show record\n");
    puts("   4.save");
    puts("   5.quit");
}
int main(int argc, const char* argv[])
{
    STU *head = NULL;
    char choice = 0;
    int flag;
    //read from file
    while(flag)
    {
       menu();
       choice = getchar();
       getchar();
       switch(choice)
        {
            case '1' : head = add_node(head);break;
            case '2' : head = delate_node(head);break;
            case '3' : show_link(head);break;
            case '4' : save_node(head);break;
            case '5' : flag = 0;break;
            default : printf("sorry no this choice~\n"); break;
        }
    }
    printf("\n");
    return 0;
}
