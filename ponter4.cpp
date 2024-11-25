#include<iostream>

using namespace std;

int main(){

    int a[5]{3,4,2,7,8};

int *p=a;

for(int i=0; i<5;i++)
{
cout<<*p<<endl;
p++;
}

return 0;
}