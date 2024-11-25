#include<stdio.h>

#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;

};

void create(struct Stack *st)
{
    printf("enter the size of stack");
    scanf("%d",&st->size);

    st->top=-1;
    st->S=(int  *)malloc(st->size*sizeof(int));

}


void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)

    printf("stack overflow\n");

    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
    printf("stack under flow\n");
else
{
    x=st->S[st->top--];

}
return x;
}
void Display(struct Stack st)
{
    
    for(int i=top;i>=0;i--)
    
    printf("%d ",st.S[i]);

    

    
      printf("\n ");

}

int main()
{
    struct Stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

Display(st);

    return 0;
}