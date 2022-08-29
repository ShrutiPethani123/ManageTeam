#include<stdio.h>

void main()
{
    int a[5]={11,22,33,44,55};

    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n--------\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n ",&a[i]);
    }

    printf("%d\n",&a);

    // printf("Enter elements for array: ");
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%d",a+i);
    // }

    // printf("Array: ");
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",a[i]);
    // }

    int *p;
    p=a;
    printf("%d\n ",a);
    printf("%d\n ",p);
    printf("%d\n ",*p);
    printf("%d\n ",*p + 1);
    printf("%d\n ",*(p+1));
    printf("%d\n ",*(p+2));
    printf("%d\n ",*(p+3)+ 5);
    printf("%d\n ",*(p-1));


    printf("Array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }

}