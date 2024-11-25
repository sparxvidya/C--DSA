#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;

};

void fun(struct Rectangle r)
{

r.length=30;
    cout<<"length"<<r.length<<endl<<"breadth"<<r.breadth<<endl;
}
int main()
{
    struct Rectangle r={10,5};
fun(r);
    printf("length %d\n breadth  %d\n ",r.length,r.breadth);

    return 0;
}