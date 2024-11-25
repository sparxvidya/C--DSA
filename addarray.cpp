#include<iostream>

using namespace std;

int main(){

    int A[7]={5,6,7,4,7,3,4};

    int n=7,sum=0;

    for(int i=0;i<7;i++)
    {
        sum=sum+A[i];
    }
    cout<<"sum"<<sum;
    return 0;
}