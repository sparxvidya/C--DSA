#include<iostream>
#include<string>

using namespace std;

int main(){

    char s1[20]="254";

    char s2[20]="435.45";

    long int x=strtol(s1,NULL,10);

    float y=strtof(s2,NULL);

    cout<<x+24<<endl<<y-45.4<<endl;

    return 0;
}