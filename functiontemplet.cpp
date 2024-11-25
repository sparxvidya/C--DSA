#include<iostream>

using namespace std;

template<class t>

t maxim( t a, t b)

{
    return a>b?a:b;
}

int main()
{
    cout<<maxim(12,13)<<endl;
    cout<<maxim(12.2f,23.4f)<<endl;


return 0;
}