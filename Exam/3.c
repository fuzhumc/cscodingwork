#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    int num;
    char type[10]; // "猫"/"狗"/"兔子"
    struct node *next;
};

void add(struct node **head, int num, char *type);
void del(struct node **head);
void query(struct node *head);
void delall(struct node **head);

int main() {
    struct node *queue;
    queue = NULL;
    char op[10]={0};
    int num;
    char type[10]={0};
    while(1)
    {
        scanf("%s",op);
        if(!strcmp(op,"ADD"))
        {
            scanf("%d %s",&num,type);
            add(&queue,num,type);
        }
        if(!strcmp(op,"DEL"))
        {
            del(&queue);
        }
        if(!strcmp(op,"QUERY"))
        {
            query(queue);
        }
        if(!strcmp(op,"EXIT"))
        {
            delall(&queue);
            return 0;
        }
    }
    
    return 0;
}

void add(struct node **head, int num, char *type)
{
    struct node *p;
    if(*head==NULL)
    {
        *head=malloc(sizeof (struct node));
        p=*head;
    }
    else
    {
        p=*head;
        while(p->next!=NULL) p=p->next;
        p->next=malloc(sizeof(struct node));
        p=p->next;
    }
    p->num=num;
    for(int i=0;i<10;i++) p->type[i]=type[i];
    p->next=NULL;
}

void del(struct node **head)
{
    if(*head==NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Del: %d-%s\n",(*head)->num,(*head)->type);
    struct node *temp=*head;
    *head=(*head)->next;
    free(temp);
    
}

void query(struct node *head)
{
    struct node *p=head;
    if(p==NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    while(p!=NULL)
    {
        printf("%d-%s ",p->num,p->type);
        p=p->next;
    }
    printf("\n");
}

void delall(struct node **head)
{
    if(*head==NULL) return;
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
        return;
    }
    delall(&((*head)->next));
    (*head)->next=NULL;
    free(*head);
}