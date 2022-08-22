// 0 1 1 2 3 5 8 13 21 .....
// a b r
//   a b
#include<stdio.h>

void main()
{
    int a=0;
    int b=1;
    int n;
    printf("Enter numbers: ");
    scanf("%d",&n);
    int result;
    printf(" %d %d ",a,b);
    for(int i=0;i<n-2;i++)
    {
        result=a+b;
        a=b;
        b=result;
        printf("%d ",result);
    }

}