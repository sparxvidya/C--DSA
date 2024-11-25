#include<iostream>

#include<stdio.h>

struct Array
int BinarySearch(struct Array arr,int key)
{
int l,mid,h;
l=0;
h=arr.length-1;

while(l<=h)
{
    mid=(l+h)/2;

    if(key==arr.A[mid])

    return mid;
    else if(key<arr.A[mid])
    h=mid-1;
else
l=mid+1;


}
return -1;
}
int main()
{
    struct Array arr={2,3,4,5,6,7,8,10};

    printf("%d\n",BinarySearch(arr,5));

    display(arr);

    return 0;
}