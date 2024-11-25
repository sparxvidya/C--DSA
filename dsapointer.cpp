#include<stdio.h>

#include<iostream>

using namespace std;

int main()
{
    int a=10;

    int *p;

    p=&a;

    cout<<a<<endl;

printf("using pointer %d\n",*p);

printf("using pointer %d\n",p);
    return 0;
}