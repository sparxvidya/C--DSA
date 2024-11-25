#include<iostream>

using namespace std;

int main(){
    int *p=new int[5];

    p[0]=23;
    p[1]=43;

    cout<<p[0]<<endl;

    delete []p;
    p=nullptr;
    return 0;
}


