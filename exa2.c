/*

n=1234
n/10 = 123
n/10 = 12
n/10 = 1
n/10 = 0

1234 % 10 = 4 
sum=sum+ rem
n=n/10 =123

1234 --> 4321

palindrom --> 

1221
565
shhhs 
*/

#include<stdio.h>

void main()
{
    int n,count=0,rem,sum=0;
    int temp=0;
   
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        // n=n/10;
        // count++;
        rem = n%10; //1234 %10 = 4  //3 // 2 // 1
        sum = sum*10 + rem; // 4 43 432 4321 
        n=n/10; // 123 //12 // 1//0

    }

    printf("reverse number %d\n",sum );
    printf("Number %d\n",temp );

    if(temp==sum)
    {
        printf("No is palindrom");
    }else{
        printf("No is not palindrom");
    }




}