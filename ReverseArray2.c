#include<stdio.h>

void main()
{
    int a[5]={1,3,4,5,7};
    int last=4; // length-1
    int start=0;
    int temp;
    while(start<=last)
    {
        temp=a[last];
        a[last]=a[start];
        a[start]=temp;
        start++;
        last--; 
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }



}