#if 0
#include <stdio.h>
int main(int argc, char const* argv[])
{
    struct xinxi 
    {
        char name[18];
        int age;
        char sex[5];
    }m;
    printf("name:\n");
    scanf("%s",m.name);
    getchar();
    printf("age:\n");
    scanf("%d",&m.age);
    getchar();
    printf("sex:\n");
    scanf("%s",m.sex);
    getchar();
    printf("name:%s age:%d sex:%s\n",m.name,m.age,m.sex);
    return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
struct student
{
    int age;
    char name[20];
};
typedef struct student STU;

int main(int argc, char const* argv[])
{
    STU m;
    m.age = 10;
    strcpy(m.name,"xiaoyu");    cannot (m.name="xiaoyu")must use strcpy
    printf("age   and    name\n");
    printf("%-5d      %s\n",m.age,m.name);

    return 0;
}
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int age;
    char name[20];
    struct student *ptr;

};
typedef struct student STU;

/*int main(int argc, char const* argv[])
{
    STU n;
    STU m;
    STU *p=NULL;
    p=&m;
    p->ptr=&n;
    p->ptr->age = 10;
    strcpy(p->ptr->name,"xiaoyu");
    printf("age   and    name\n");
    printf("%-5d      %s\n",p->ptr->age,p->ptr->name);
    printf("%-5d      %s\n",n.age,n.name);

    return 0;
}*/
int main(int argc, char const* argv[])
{
    STU *ptr = NULL;
    ptr =  malloc(sizeof(STU));
    if (ptr == NULL)      //judfe malloc weather succsess
    {
        perror("malloc");
        exit(0);
    }
    ptr->age=10;
    strcpy(ptr->name,"xiaoyu");
    printf("%-5d      %s\n",ptr->age,ptr->name);

    return 0;
}
