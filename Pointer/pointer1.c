#include<stdio.h>

void main()
{
    int a=15;
    printf("%d\n",a); // 15
    printf("%d\n",&a);  // add of a

    // int *p;
    // p=&a; 

    int *p=&a;
    printf("%d\n",p); //add of a
    printf("%d\n",*p); 

    *p=-23;
    printf("%d\n",p);  // add of a
    printf("%d\n",*p); // 23
    printf("%d\n",a);  // 23
    printf("%d\n",&a);  // add of a

    //-----------------------

    int x,*p1;

    p1=x; // invalid
    *p1=x; // valid
    p1=&x; // valid
    *p1=&x; // invalid
    
    
    

}