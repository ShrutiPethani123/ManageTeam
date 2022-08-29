/*

loops
1. entry control (for , while)
2. exit control (do while)

for(inializtion ; condition ; inc/dec)
{
    // body of loop
}

intialization
while(condition)
{

    inc/dec
}


intialization
do
{

    inc/dec
}while(condition);



*/

#include<stdio.h>

void main()
{
    // for(int i=0;i<5;i++)
    // {
    //     printf("kunika\n");
    // }

    // int j=0;
    // while(j<5)
    // {
    //     printf("kunika\n");
    //     j++;
    // }

    // int k=0;
    // do{
    //     printf("kunika\n");
    //     k++;
    // }while(k>5);

    // for(int i=1;i<=10;i++)
    // {
    //     printf("%d  ",i);
    // }

        for(int i=50;i>=1;i-=2)
        {
            printf("%d ",i);
        }
    
}