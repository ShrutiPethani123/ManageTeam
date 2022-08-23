#include<stdio.h>

int factorial(int x); // function declaration
void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    int ans=factorial(n); // function calling
    printf("Factorial of %d is %d",n ,ans);

}

int factorial(int x) // defination
{
    int fact=1;
    // for(int i=1;i<=x;i++)
    // {
    //     fact=fact*i;
    // }

    for(int i=x;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}