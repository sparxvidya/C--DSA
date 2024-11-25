#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char s1[20]="vidyasagar";
    char s2[20]="pandey";

    strncat(s1,s2,4);

    cout<<s1<<endl;

    return 0;
}