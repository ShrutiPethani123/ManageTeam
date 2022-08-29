#include<stdio.h>

void printArray(int x[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
}

void main()
{
    int a[10],n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printArray(a,n);
    printArray(a,n);
    printArray(a,n);

}

/*


1. find maximum element from array using function

with rt and with arg
int maxArray(int x[],int n)
{

}

call

int max = maxArray(a,n);

2. search element from array using function.

1 3 4 5 6 

key = 4 return 2
key - 30 return -1

int search(int n[],int size)



*/