#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int number;
    char name[20];
    struct student *next;
};

typedef struct student STU;

STU *create_link(int n)
{
    int i = 0;
    STU *head = NULL;
    STU *p = NULL;

    head = p = malloc(sizeof(STU));
    if(p == NULL)
    {
        perror("create");
        exit(0);
    }
    p->number = 1;
    strcpy(p->name, "student");
    p->next = NULL;

    for(i=1; i<n; i++)
    {
        p->next = malloc(sizeof(STU));
        if(p->next == NULL)
        {
            perror("create");
            exit(0);
        }
        p->next->number = i+1;
        strcpy(p->next->name, "student");
        p->next->next = NULL;
        p = p->next;

    }

return head;
}
int tongjijiedianshu(STU *p)
{   
    int couter = 0;
    while(p != NULL)
    {
        couter++;
        p = p->next;
    }
    return couter;
}

void print_link(STU *p)
{
    while(p != NULL)
    {
         printf("%-5d %s\n", p->number,p->name);
         p = p->next;
    }
}
STU *add_link(STU *p)
{
    STU *head=p;
    STU *p_1;
    p_1 = malloc(sizeof(STU));
    if (p_1==NULL)
    {
        perror("add");
        exit(0);
    }
    printf("intput number:\n");
    scanf("%d",&p_1->number);
    printf("intput name:\n");
    scanf("%s",p_1->name);
    p_1->next = NULL;
    if (p_1->number < p->number)
    {
        p_1->next = p;
        return p_1;
    }
    while(p->next != NULL)
    {
        if (p->next->number > p_1->number)
        {
            break;
        }
        p = p->next;
    }
   // p_1 = p->next;
   // p_1->next = p->next;
    p_1->next = p->next;
    p->next = p_1;
    return head;
    
}
STU *delate_link(STU *p)
{
    STU *head = p;
    STU *temp = NULL;
    int number=0;
    printf("please input a number to delate:\n");
    scanf("%d",&number);
    if (number < p->number)
    {
        printf("NO found this number please try again\n");
        return head;
    }
    if (p->number == number)
    {
        free(p);
        return p->next;
    }
    while(p->next != NULL)
    {
        if (p->next->number == number)
        {
            break;
        }
        p = p->next;
    }
    if (p->next == NULL)
    {
        printf("NO found this number please try again\n");
        return head;
    }
    temp = p->next;
    p->next = p->next->next;
    free(temp);

/*    STU *p_d = NULL;
    p_d = malloc(sizeof(STU));
    if (p_d == NULL)
    {
        perror("delate");
        exit(0);
    }
    printf("input number:\n");
    scanf("%d",&p_d->number);
    p_d->next = NULL;
    if (p_d->number < p->number)
    {
        printf("NO found this number!!\n");
        return head;
    }
    if (p_d->number == p->number) 
    {
        return p->next;
        free(p);
    }
    while(p->next != NULL)
    {
        if (p->next->number == p_d->number)
        {
            free(p->next);
            break;
        }
        p = p->next;
    }*/
   // p->next->next = p->next;
  // p->next = p->next->next;       //point out is defferent
    return head;
}
int main(void)
{
    int couter;
   // srand(time(NULL));
   // n = rand()%20;
    STU *head = NULL;
    head = create_link(10);
    couter = tongjijiedianshu(head);
    print_link(head);
    printf("total link:%d\n",couter);
   // head = add_link(head);
   // print_link(head);
   // couter = tongjijiedianshu(head);
   // printf("total link:%d\n",couter);
    head = delate_link(head);
    print_link(head);
    couter = tongjijiedianshu(head);
    printf("total link:%d\n",couter);
    return 0;
}

