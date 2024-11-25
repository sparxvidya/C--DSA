#include<iostream>
using namespace std;

int search(int A[],int n, int key)
{
    for(int i=0;i<n;i++)
    if(key==A[i])
    return i;
return 0;
}
int main()
{
    int A[]={2,4,5,7,10,9,13};

    int k;
    cout<<"enter an element to be started:";
    cin>>k;
    int index=search(A,7,k);
    cout<<"element found at index:"<<index<<endl;
}