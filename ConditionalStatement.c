/*

1. simple if
2. else if
3. nestde if
4. else if ladder
*/

#include<stdio.h>

void main()
{
    float unit;
    float bill;
    printf("Enter units:");
    scanf("%f",&unit);

    if(unit<=50)
    {
        bill = unit*0.50;
    }
    else if(unit<=150) // 120 - 50(25)+ 70*0.75(52.5) = 77.5
    {
        bill = 50*0.50 + (unit-50)*0.75;
    }else if(unit<=250)
    {
        bill= 50*0.50 + 100*0.75 + (unit-150)*1.20;

    }else{
        
        bill = 50*0.50 + 100*0.75+ 100*1.20 + (unit-250)*1.50;
    }

    printf("Total bill is %f", bill);

}

/*

task:

11. count total no of notes in given amount - 1552
	500 - 3(52)
	200
	100
	50 - 1(2)
	10
	5
	1 - 2(0)

12. Write a program to take input from user in seconds and convert into hours and minutes.

	10000 - 2 :46 : 40

	
13. Write a program to input electricity unit charge and calculate the total 
	electricity bill according to the given condition:

	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit

	300 
	50 - 0.50 = 25
	100 - 0.75=75
	100 - 1.20 = 120
	50 - 1.50  = 75   total - 295
	 
*/