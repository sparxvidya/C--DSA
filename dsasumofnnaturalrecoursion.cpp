#include<stdio.h>

int sum(int n)
{
    if(n==0)
   return 0;
    return  sum(n-1)+n;
}

int isum(int n)
{
    int s=0;
    int i;
    for(i=0;i<=n;i++)

    s=s+i;
    return s;
}
int main()
{
int t;
t=isum(45);

printf("%d ",t);

return 0;
}