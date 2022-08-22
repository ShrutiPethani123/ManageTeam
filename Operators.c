#include<stdio.h>

void main()
{
    int a=3;
    int b=6;
  
    // int c= a++ + ++a + a++; //3(4) + 5(5)+5(6)=3+5+5 =13
    // int d= a++ +a++ + a++ + ++a; // 3(4)+4(5)+5(6)+7(7) = 19
    // int x= a++ + b++ + b++ + a++; 
    // int x = a++ + b++ + a++ + ++b + ++b + ++a; //3(4)+6(b=7)+4(5)+8(8)+9(9)+6(6)
    int x= b++ + ++b + a++ + a++ + ++a + ++b;
    printf("%d\n",x); 
    printf("%d\n",a); 
    printf("%d\n",b);  

}
/*
36
36
34


*/