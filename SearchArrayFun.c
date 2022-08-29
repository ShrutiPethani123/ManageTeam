#include<stdio.h>

int search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    int n=6,key;
    int arr[6]={1,2,3,44,5,6};
    printf("Enter element do you want to search? ");
    scanf("%d",&key);
    
    int ans=search(arr,n,key);
    if(ans>=0)
    {
        printf("%d is present at %d",key,ans+1);
    }else{
        printf("Not found!!!");
    }
}