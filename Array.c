/*

Array --> 

Array is collection of same data type
Array elements have continous memory location
index start with 0
index ending with length-1


*/

#include<stdio.h>

void main()
{
    int a[5];
    int b[5];
    int c[5];
    printf("Enter elements for 1st array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements for 2nd array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("1st array: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n2nd array:\n ");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",b[i]);
    }
    
    printf("\nSum of two array:\n ");
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]-b[i];
        printf("%d  ",c[i]);
    }
}

/*

1. Initialize array and print the array.
2. take all input from user and store into array and print that array.
3. take two array from user and print sum of two array.
4. sum of all elements of array (1 2 4 5 3  --> 15)
5. count negative numbers from array.( -2 , -3, 5, 6 , -8 ,3  ) -->3
6. count total number of odd and even numbers from array.(1 2 3 5 6 7 8) 
    odd count = 4
    even count = 3
7. count total number of odd and even numbers from array.(1 2 3 5 6 7 8) 
    odd count = 4
    even count = 3 and store odd and even numbers into two seprate array.
8. search element from array. take input from user.
    A -( 1 5 2 6 9 4 8)
    user - 6  --> found at index 3
    user - 10 --> not found
9.  print reverse array.(1 2 3 6 7 ) --> 7 6 3 2 1
10. reverse array in memory using another array.
11. reverse array in memory without using extra array.

*/