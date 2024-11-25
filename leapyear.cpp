#include<iostream>

using namespace std;

int main(){

    int year;

    cout<<"enter year-";
    cin>>year;

    if(year%4==0)
    {
        if(year%100==0)

{
    if(year%400==0)
    cout<<year<<"leap year";
    else
    cout<<year<<"not leap year";


}
else
cout<<year<<"is a  leap year.";

return 0;
    }

}

