/*
  use link way to make yuseful 
  two point->link(?)
                            */
#include <stdio.h>  
#include <stdlib.h>
#include <string.h> 
struct yuseful
{
    int number;
    struct yuseful *next;
};
typedef struct yuseful YU;
YU *init_link(int n)
{
    int i = 0;
    YU *head = NULL;
    YU *p = NULL;

    head = p = malloc(sizeof(YU));
    if(p == NULL)
    {
        perror("create");
        exit(0);
    }
    p->number = 1;
    p->next = NULL;

    for(i=1; i<n; i++)
    {
        p->next = malloc(sizeof(YU));
        if(p->next == NULL)
        {
            perror("create");
            exit(0);
        }
        p->next->number = i+1;
        p->next->next = NULL;
        p = p->next;

    }
    p->next = head;
    return p->next;

}
void yuseful(YU *p_f)
{
    YU *p = p_f->next;
    int couter = 0;
    int interval = 4;
    while(p != p->next)
    {
        couter++;
        if(couter == interval)
        {
            printf("%-4dout\n",p->number);
            couter = 0;
            p_f->next = p->next;
            free(p);
            p = p_f->next;
        }
        else
        {
            printf("%-4d",p->number);
            p = p->next;
            p_f = p_f->next;
        }
    }
    printf("letf :%d\n",p_f->number);   
}
   

int main(int argc, const char* argv[])
{
    YU *rear=NULL;
    int n;
    printf("input a number\n");
    scanf("%d",&n);
    rear = init_link(n);
    yuseful(rear);
    return 0;
}
