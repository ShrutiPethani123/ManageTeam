//least comman multiple

// 12 --> 12 24 36 48 60 72 84 96 120
// 30 --> 30 60 90 120 150 180 210 

#include<stdio.h>

void main()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y); // x=6 y=8
    // int n = x>y ? x: y; // 6>8 --> n=8 
    int n;
    if(x>y)
    {
        n=x;
    }else{
        n=y;
    }
    int lcm;
    while(1)
    {
        if(n%x==0 && n%y==0)
        {
            lcm=n;
            break;
        }
        n++;

    }
    printf("lcm of %d and %d is %d ",x,y,lcm);

}