#include<iostream>
using namespace std;
int main(){
    int hour;
    cout<<"enter hour-";
    cin>>hour;
    if(hour>=10&&hour<=20)
    {
        cout<<"working"<<endl;
    }
    else{
        cout<<"liesure";
    }
    return 0;
}