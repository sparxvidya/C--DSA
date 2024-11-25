#include<iostream>

using namespace std;

int main(){
int n,i,sum=0;
cout<<"enter the no=";
cin>>n;
    for(i=1;i<=n;i++)
    
{
        if(n%i==0)
        

{
    sum+=i;

}

}
cout<<"sum is ="<<sum;
return 0;
}