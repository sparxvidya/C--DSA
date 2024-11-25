#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char  *s;
    cout<<"enter anything   ";
    cin.getline(s,100);

    cout<<"length  "<<strlen(s)<<endl;

    return 0;
}