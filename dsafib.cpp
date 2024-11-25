#include<iostream>
#include<stdio.h>

int fib(int n)
{
    if(n<=1)
    return n;

return fib(n-2)+fib(n=1);

}

int main()
{
    int f;
    f=fib(6);

    printf("%d ",f);

    return 0;

}