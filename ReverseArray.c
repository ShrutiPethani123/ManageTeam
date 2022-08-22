#include<stdio.h>

void main()
{
    int a[5]={2,4,66,27,89};
    int b[5];
    printf("reverse Array: ");
    int bindex=0;
    int aindex=4;
    while(aindex>=0)
    {
        b[bindex]=a[aindex];
        bindex++;
        aindex--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    
}