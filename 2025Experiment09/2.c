#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    int stunum;  
    char name[20];  
    float score;  
    struct student *next;
};

struct student *buildlist(int n)
{
    struct student *p=(struct student *)malloc(sizeof(struct student));
    scanf("%d%s%f",&p->stunum,p->name,&p->score);
    if(n>1) p->next=buildlist(n-1);
    else p->next=NULL;      
    return p;
}

void printlist(struct student *head)
{
    struct student *p=head;
    while(p!=NULL)
    {
        printf("%d %s %f\n",p->stunum,p->name,p->score);
        p=p->next;
    }
}

void searchlist(struct student *head, char *name)
{
    struct student *p=head;
    while(p!=NULL)
    {
        if(strcmp(p->name,name)==0)
        {
            printf("%d %s %f\n",p->stunum,p->name,p->score);
            return;
        }
    }
    printf("Not exist!\n");
}

int main()
{
    struct student *head=buildlist(10);
    printf("\n");
    printlist(head);
    printf("\n");
    searchlist(head,"李霞");
}