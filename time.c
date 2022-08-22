#include<stdio.h>

void main()
{
    int sec,hr=0,min=0;
    printf("Enter seconds:");
    scanf("%d",&sec);// 10000

    // hr=sec/3600; //2
    // sec = sec - hr*3600;
    // min= sec/60;
    // sec=sec-min*60;

    if(sec>=3600)
    {
        hr=sec/3600;
        sec=sec-hr*3600;
        // printf("%d",hr);
        // printf("%d",sec);
    }
    if(sec>=60)
    {
        min=sec/60;
        sec=sec-min*60;
    }
    printf("%d:%d:%d",hr,min,sec);

}