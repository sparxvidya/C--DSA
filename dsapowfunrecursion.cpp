#include<stdio.h>

int pow(int m,int n)
{
    if(n==0)

    return 1;

    return pow(m,n-1)*m;

}
int main()
{
    int p;
    p=pow(2,9);

    printf("%d ",p);

    return 0;
}