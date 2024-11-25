#include<iostream>

using namespace std;

int main(){
     int m,n;
     cout<<"enter the no=";
     cin>>m>>n;

     while(m!=n)

    {
        if(m>n)
        m=m-n;
        else if(n>m)
        n=n-m;
    }
    {
        cout<<n;
    }
    return 0;
}