#include<stdio.h>

void main()
{
    int x=5;
    int y=80;

    printf("befor swap: ");
    printf("x=%d , y=%d ",x,y);

    // using third variable
    // int temp=x;
    // x=y;
    // y=temp;

    // without using third variable

    x=x+y; // x=85
    y=x-y; // y=85-80 =5
    x=x-y; // x=85-5 = 80

    printf("\nAfter swap: ");
    printf("x=%d , y=%d ",x,y);



}