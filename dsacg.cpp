#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data;

    struct Node *next;

}*first;

void create(int A[] , int n)

{
    int i;

    struct Node *t ,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    }

    void Display(struct Node *p)
    {
        while(p!=NULL)
        {
            printf("%d",p->data);
            p=p->next;
        }
    }

void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d  ",p->data);
        RDisplay(p->next);
    }
}

int count(struct Node *p)
{
    int l=0;

    while(p)
    {
        l++;

        p=p->next;
    }
    return l;
}

int sum(struct Node *p)
{
    int s=0;

    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum(struct Node *p)
{
    if(p==NULL)
    return 0;
else

return Rsum(p->next)+p->data;
}




struct Node * Lsearch(struct Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)

        return p;

        p=p->next;
    }

    return 0;
}

void Insert(struct Node *p,int index,int x)
{

    struct Node *t;
     
     int i;
    if(index < 0 ||index > count(p))

    return ;
    t=(struct Node *)malloc(sizeof(struct Node));
t->data=x;

if(index==0)
{
    t->next=first;
    first=t;
}
else
{
    for(i=0;i<index-1;i++)
    p=p->next;
t->next=p->next;
p->next=t;

}
}


void SortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;

    t=(struct Node*)malloc(sizeof(struct Node));

    t->data=x;
    t->next=NULL;

    if(first==NULL)
    first=t;
else
{
    while(p && p->data<x)
    {
        q=p;
        p=p->next;
    }
    if(p==first)
    {
        t->next=first;

        first=t;
    }
    else
    {
        t->next=q->next;
        q->next=t;
    }
}
}


int Delete(struct Node *p,int index)
{
    struct Node *q;
    int x=-1 ,i;

    if(index <1 || index > count(p))

    return -1;

    if(index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free (q);

        return x;
    }
    else
    {
        for(i=0;i<index;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free (p);
        return x;
    }
}



int isSorted(struct Node *p)

{
    int x=-65536;

while(p!=NULL)
{
    if(p->data < x)

    return 0;
    x=p->data;
    p=p->next;
}
return 1;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q=p->next;

    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;

            free(q);
            q=p->next;
        }
    }
}

void Reverse(struct Node *q, struct Node *p)
{
    if(p)
    {
        Reverse(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}


int isLoop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;

    } while(p && q && p!=q);

    if(p==q)
    return 1;
else
{
    return 0;
}
}


    int main()
    {

        struct Node *t1,*t2;
        int A[]={3,5,7,3,15};
create(A,5);

t1=first->next->next;
t2=first->next->next->next->next;
t2->next=t1;
 printf("is loop %d",isLoop(first));
return 0;
    }