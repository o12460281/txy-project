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
    int consts;
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
    YU *p = NULL;
    p_f->next = p;
    int couter = 0;
    int interval = 4;
    while(p != p->next)
    {
        couter++;
        if(couter == interval)
        {
            printf("%dout\n",p->number);
            couter = 0;
            free(p);
            p_f->next = p->next;
            p = p_f->next;
        }
        else
        {
            printf("%d\n",p->number);
            p = p->next;
            p_f->next =p;
        }
    }
    
}
   

int main(int argc, const char* argv[])
{
    YU *head=NULL;
    YU *rear=NULL;
    rear = init_link(n);
    yuseful(rear);
    return 0;
}
