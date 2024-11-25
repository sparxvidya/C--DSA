#include<iostream>

using namespace std;

int main(){
    int n,num,digit,rev=0;

    cout<<"enter the positive no =";

    cin>>num;

    n=num;
    do 
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=(num/10);
    }
    while(num!=0);
    cout<<"enter reverse of the no is="<<rev<<endl;

    if(n==rev)
    cout<<"the number is palindrome";
    else
    cout<<"the numer is not palindrome";
    return 0;
}