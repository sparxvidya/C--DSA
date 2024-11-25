#include<iostream>

using namespace std;

int main(){

    int A[7]={5,6,7,4,7,3,4},i,key;

    cout<<"enter the no to search-";
    cin>>key;

for(i=0;i<10;i++){
    if(key==A[i])
{
    cout<<"element found="<<i<<endl;
    exit(0);
}
    
    }
    



return 0;
}
    
