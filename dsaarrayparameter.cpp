#include<iostream>

#include<stdio.h>

using namespace std;

void fun(int A[ ], int n)
{

    for(int i=0;i<n;i++)

    cout<<A[i]<<endl;
}

int main(){

    int A[ ]={3,4,6,7,8};

    int n=5;

    fun(A,n);

    for(int x:A)


    cout<<x<<" ";

    return 0;
}
