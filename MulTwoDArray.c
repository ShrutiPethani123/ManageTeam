#include<stdio.h>

void main()
{
    int a[10][10],b[10][10],c[10][10];
    int row,col;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of columns");
    scanf("%d",&col);

    printf("Enter elements for 1st Array: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements for 2nd Array: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("1st Array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("2nd Array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of two array is: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=0;
            for(int k=0;k<col;k++)
            {
                // c[i][j]+=a[i][k]*b[k][j];
                c[i][j]=c[i][j]+ a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}