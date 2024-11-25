#include<iostream>

using namespace std;


int  max(int a, int b ,int c)
{
    return a>b && a>c ? a:(b>c?b:c);
}
int main(){

    cout<<max(13,45,34);

    return 0;

}