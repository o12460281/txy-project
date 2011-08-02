#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int age;
    struct student *next;
};
typedef struct student STU;
STU *link(int n)
{
    STU *head = NULL;
    STU *p = NULL;
    int i;
    head = p = malloc(sizeof(STU));
    if (p == NULL)
    {
        perror("malloc");
        exit(0);
    }
    p->age = 0;
    strcpy(p->name,"xiaoyu");
    p->next=NULL;
    for (i = 1; i < n; i++)
    {
        p->next=malloc(sizeof(STU));
        if (p->next==NULL)
        {
            perror("malloc");
            exit(0);
        }
        p->next->age = i;
        strcpy(p->next->name,"xiaoyu");
        p->next->next=NULL;
        p = p->next;
    }
    return head;
}
void print(STU *p)
{
    while(p != NULL)
    {
         printf("%s     %-5d\n",p->name,p->age);
         p = p->next;
    }
}
int main(void)
{
    STU *head = NULL;
    head = link(5);
    print(head);
    return 0;
}
