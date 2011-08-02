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
    p_1->next = p->next;
    p->next = p_1;
    return head;
    
}
int main(void)
{
    int n;
    int couter;
   // srand(time(NULL));
   // n = rand()%20;
    STU *head = NULL;
    head = create_link(10);
    couter = tongjijiedianshu(head);
    print_link(head);
    printf("total link:%d\n",couter);
    head = add_link(head);
    print_link(head);
    couter = tongjijiedianshu(head);
    printf("total link:%d\n",couter);
    return 0;
}

