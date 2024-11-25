#include<iostream>

using namespace std;

int main(){

    int a[5]{3,4,2,7,8};

    int *p=a;

    cout<<*p<<endl;

    p++;

    cout<<*p<<endl;

    p--;

cout<<*p<<endl;
p-2;
    return 0;
}
