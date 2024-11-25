#include<iostream>
using namespace std;

int main ()
{
    int a=18;
    int &r=a;
r=24;
    cout<<a<<endl<<r<<endl;

    return 0;
}