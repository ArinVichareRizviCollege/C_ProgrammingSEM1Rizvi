/******************************************************************************
Name: Arin Vichare Roll no: 40 Class: FE Mech,Div: F
UIN:251M046

*******************************************************************************/

#include <stdio.h>

 int main()
 {
     int first,last, sum=0;
     printf("Enter the first number: \n");
     scanf("%d", &first);
     printf("Enter a number bigger than %d: \n", first);
     scanf("%d", &last);
     
     for(int i= first; i<=last; i++)
     {
     if(i%2!=0)
         sum += i;
     }
     printf("Sum of all the odd numbers between %d and %d is: %d\n", first, last, sum);
     
     return 0;
 }