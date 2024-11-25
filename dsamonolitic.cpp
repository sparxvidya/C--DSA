#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int length=0,breadth=0;

    printf("enter lenth and breadth");

    cin>>length>>breadth;

    int area=length*breadth;

    int peri=2*(length+breadth);

printf("area=%d\nperimeter=%d\n",area,peri);

    cout<<"area="<<area<<endl<<"perimeter="<<peri<<endl;

    return 0;
}