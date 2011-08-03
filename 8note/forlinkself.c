#include <stdio.h>
#include <stdlib.h>     
#include <string.h>
struct people
{
    char name[10];
    int age;
    struct people *next;
};
typedef struct people MAN;
MAN *add_link(MAN *p)
{  
    MAN *head = p;
    MAN *p_a = NULL;
    p_a = malloc(sizeof(MAN));
    if (p_a == NULL)
    {
        perror("add");
        exit(0);
    }
    printf("name:\n");
    scanf("%s",p_a->name);
    printf("age\n");
    scanf("%d",&p_a->age);
    p_a->next = NULL;
    if (p==NULL)
    {
        return p_a;
    }
    if (p_a->age < p->age)
    {
        p_a->next = p;
        return p_a;
    }
    
    while(p->next != NULL)
    {
        if (p->next->age > p_a->age)
        {
            break;
        }
        p = p->next;
    }
    if (p->next == NULL)
    {
        p->next = p_a;
        return head;
    }
    p_a->next = p->next;
    p->next = p_a;
    return head;
}
void print_link(MAN *p)
{
    if (NULL == p)
    {
        printf("non\n");
        return;
    }
    while(p != NULL)
    {
        printf("%s       %-6d\n",p->name,p->age);
        p = p->next;
    }
}
int main(int argc, const char* argv[])
{
    MAN *head=NULL;         //must bei initianal NULL;
    int i;
    for (i = 0; i < 3; i++)
    {
        head = add_link(head);
    
    }
    print_link(head);
    return 0;
}
