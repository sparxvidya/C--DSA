#include<iostream>
using namespace std;

int g=19;

void fun()
{
    int a=22;

    a++;
    g++;
    cout<<a<<"  "<<g<<endl;

}

int main(){
    cout<<g<<endl;
    fun();
    cout<<g<<endl;

    return 0;
}