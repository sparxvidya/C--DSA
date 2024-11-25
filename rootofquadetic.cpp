#include<iostream>
#include<math.h>
using namespace std;

int main (){
    float r1,r2, a,b,c,discriminant;
    cout<<"enter a b c-";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    r1=(-b+sqrt(discriminant))/(2*a);
    r2=(-b-sqrt(discriminant))/(2*a);
    cout<<"roots are="<<r1<<" "<<r2;
    return 0;
}