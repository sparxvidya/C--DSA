#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char s1[20]="vidyasagar";

    char s2[20]="sagar";

    if(strstr(s1,s2)!=NULL)

    cout<<strstr(s1,s2)<<endl;

    else

    cout<<"not found";

    return 0;
}