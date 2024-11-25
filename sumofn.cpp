#include<iostream>

using namespace std;

int main(){

    int i=1,n,sum=0;

    cout<<"enter value of n=";

    cin>>n;

    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<"the sum of  natural no is="<<sum;

    return 0;
}