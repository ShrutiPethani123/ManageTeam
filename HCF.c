/*

12 - 1 2 3 4 6 12
30 - 1 2 3 5 6 10 15 30 
*/

#include<stdio.h>

void main()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);

    int n = x<y ? x: y;
    int hcf;
    for(int i=1;i<n;i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }

    printf("hcf of %d and %d is %d",x,y,hcf);

}