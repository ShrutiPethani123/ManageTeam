/*

1234

1234 % 10= 4 ( last digit)  1234/10 = 123
123%10 = 3      123/10 = 12
12%10 = 2       12/10 = 1
1%10 = 1        1/10 0

*/


#include<stdio.h>

void main()
{
    int n;
    int count=0;
    printf("Enter a no: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;

    }
    printf("%d",count);


}