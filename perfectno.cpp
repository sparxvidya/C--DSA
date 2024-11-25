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
if(2*n==sum)
cout<<"pertfect no =";
else
cout<<"not a perfect no=";
return 0;
}