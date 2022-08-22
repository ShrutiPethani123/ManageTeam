#include<stdio.h>

void main()
{
    int a[10][10],b[10][10],c[10][10];
    int row,col;
    printf("Enter a row: ");
    scanf("%d",&row);
    printf("Enter a column: ");
    scanf("%d",&col);

    printf("Enter elements for 1st array: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements for 2nd array: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("1st Array is: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("2nd Array is: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    printf("Sum of two array is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }



}