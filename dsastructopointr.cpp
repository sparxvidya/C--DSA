#include<iostream>

#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;

    int breadth;

};

int main()
{
  struct  Rectangle *p;

    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=7;
    struct Rectangle r{10,12};

    

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}