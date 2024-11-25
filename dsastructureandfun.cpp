#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
int perimeter(Rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);

    return p;
}

int main()
{
    Rectangle  r={0,0};

    int l,b;

    printf("enter lenth and breadth");

    cin>>l>>b;

    int a=area(r);

    int peri=perimeter(r);

printf("area=%d\nperimeter=%d\n",a,peri);

    cout<<"area="<<a<<endl<<"perimeter="<<peri<<endl;

    return 0;
}