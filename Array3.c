#include<stdio.h>

void main()
{
    int a[5],odd[5],even[5],oddcount=0,evencount=0;

    printf("Enter elements: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Element is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    int m=0,n=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
            even[m]=a[i];
            m++;
        }else{
            oddcount++;
            odd[n]=a[i];
            n++;
        }
    }

    printf("\nOdd Array: ");
    for(int i=0;i<oddcount;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\neven Array: ");
    for(int i=0;i<evencount;i++)
    {
        printf("%d ",even[i]);
    }
}
