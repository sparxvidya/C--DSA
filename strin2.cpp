#include<iostream>

using namespace std;

int main(){

    char s[100];

    char  s2[100];

    cout<<"enter name   ";
    cin.getline(s ,100);
    cout<<"welcome  "<<s<<endl;

    cout<<"enter your name     ";
    cin.getline(s2 ,100);
    cout<<"Thank you    "<<s2;
    return 0;
}