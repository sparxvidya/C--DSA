#include<iostream>

using namespace std;

int main(){

    int i=1,n,fact=1;

    cout<<"enter no=";

    cin>>n;

    while(i<=n)

    {
        fact*=i;

        i++;

    }
    cout<<"the factorial is="<<fact;
    return 0;
}