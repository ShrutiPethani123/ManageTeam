#include<stdio.h>

void main()
{
    // int a[2][3]={{1,2,3},{5,6,7}};
    int a[2][3]={1,2,3,5,6,7};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("%d\n",a[0][2]);
    printf("%d\n",a[0][1]);
}

/*

1. intialize the array and print that array.
2. take all elements from user and print that array.
3. print sum of two array.
4. multiplication of 2D array.

*/