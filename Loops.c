/*
loop:-

1. entry control - For ,while
2. exit control - do while


for(inti;con;inc/dec)
{

    //body of loop
}

inti
while(con)
{

    // body
    inc/dec
}

init
do{

//body
inc/dec

}while(con);

*/

#include<stdio.h>

void main()
{
    // int i;
    // for(i=2;i<=10;i+=2)
    // {
    //     // if(i%2==0)
    //     // {
    //     //     printf("%d ",i);
    //     // }
    //     printf("%d ",i);        
    // }

    // int j=0;
    // while(j<10)
    // {
    //     printf("%d ",j);
    //     j+=2;// j=j+2
    // }

    int k=1;
    do{
        printf("Hello... %d\n",k);
        k+=2;

    }while(k<5);
    

}
/*

1. print first 20 odd numbers using all loop.
2. print first 20 odd numbers without using if else. using all loop.
3. write a program to print multiplication table using all loop.
4. print sum of first 10 natural number using for , while and do while.
5. print all aplphabet A to z.
6. print 50 to 1 in reverse number using all loop.
7. count total number of digits in Number.(4567 - 4)
8. take input from user and print sum of digits.(12354 - 15 )
9. print reverse number(1234 - 4321)
10. check number is palindrom or not ?
11. find all factors of user given number. ( 12 -  1,2,3,4,6,12)
12. find HCF of two numbers(12 , 30 --> 6)
13. find LCM of two numbers(12,30 - 60)
14. check number is prime number or not ?
15. find factorial of number. ( 5--> 5*4*3*2*1=120)
16. swap two number using third variable.
17. swap two number without using third variable.
18. print fibonacci series.( 0 1 1 2 3 5 8 13 21 34)

*/