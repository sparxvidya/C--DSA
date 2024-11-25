#include<iostream>
#include<stdio.h>

using namespace std;

//struct Rectangle 
class Rectangle
{
    public:
    int length;
    int breadth;


void initialise(int l,int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}
int perimeter()
{
   // int p;
   // p=2*(length+breadth);

    //return p;
//}
};
int main()
{
    Rectangle r;

    int l,b;

    printf("enter lenth and breadth");

    cin>>l>>b;

    r.initialise(l,b);

    int a=r.area();

    int peri=r.perimeter();

printf("area=%d\nperimeter=%d\n",a,peri);

    cout<<"area="<<a<<endl<<"perimeter="<<peri<<endl;

    return 0;
}