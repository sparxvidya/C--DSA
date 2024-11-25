#include<iostream>


using namespace std;


int main(){


    int a,b,c;
    cout<<"enter two no=";


    cin>>a>>b;
    if(b==0){
        cout<<"division by zero"<<endl;
    }

    
    else{
        c=a/b;
        cout<<c<<endl;

    }
    return 0;
}