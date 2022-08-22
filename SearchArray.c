#include<stdio.h>

void main()
{

    int a[5]={2,4,5,6,7};
    int n,flag=0;
    printf("Enter element which you want to search ? : ");
    scanf("%d",&n);
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            flag=1;
           break; 
              
        }
    }
    if(flag==1)
    {
        printf("Element found at location %d ",i+1);
    }else{
        printf("not found!!!");
    }
}