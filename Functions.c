/*

function --> it is a block of code that we can use repetedly

1. function declaration / defination
2. function calling


4 types

1. no return type no argument
2. no return type with argument
3. with return type with argument
4. with return type no argument

---> syntax:

return type function name(argument/perameter)
{
    // body of function
}

return type ---> int , float , char , double , void

--------------------------------------------------------------
--> with rt with arg

int add(int c , int d){}

--> with rt no arg

int add(){}

--> no rt with arg

void add(int x, int y){}

--> no rt no arg

void add(){}

*/

#include<stdio.h>

void add(int x , int y)
{
    printf("Addition is: %d\n",x+y);
}
int sub(int a,int b)
{
    return a-b;
}
int mul()
{
    int a,b;
    printf("\nEnter two no: ");
    scanf("%d %d",&a,&b);
    return a*b;
}

void div()
{
    int a,b;
    printf("\nEnter two no: ");
    scanf("%d %d",&a,&b);
    printf("Division is %d ",a/b);
}
void main()
{
    int a,b;
    printf("Enter two no: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    // add(3,4,5);
    int ans=sub(a,b);
    printf("substraction is: %d",ans);
    // int ans2=mul();
    // printf("Multiplication is: %d",ans2);
    printf("multiplication is %d",mul());
    div();  

}

/*
1. find factorial of a number using function
    (4!= 4*3*2*1 =24)
2. check number is prime or not using function.
*/