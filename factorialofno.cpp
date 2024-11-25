#include<iostream>

using namespace std;

int main(){

    int i,n,fact=1;

    cout<<"enter n=";

    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of a number is ="<<fact;

    return 0;
}