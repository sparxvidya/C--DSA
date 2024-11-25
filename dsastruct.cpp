#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;

    char x;
};

int main()
{
    struct Rectangle r1={10,5};

    r1.length=23;

    r1.breadth=45;
cout<<sizeof(r1)<<endl;

cout<<r1.length<<endl;

cout<<r1.breadth<<endl;

printf("%d\n",sizeof(r1));

return 0;

}