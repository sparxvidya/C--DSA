#include<iostream>

#include<stdio.h>

using namespace std;

int add(int a, int b)
{

int c;

c=a+b;

return (c);
}

int main()
{
    int num1=12, num2=23,sum;

    sum=add(num1,num2);

    cout<<sum;

}