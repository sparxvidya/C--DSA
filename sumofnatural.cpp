#include<iostream>

using namespace std;

int main(){

    int n,i,sum=0;
    cout<<"enter n-";

    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"the sum of no "<<sum;

    return 0;
}