/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float phyM, chemM, mathsM, sum;
    float perc;
    printf("Enter marks obtained in Physics: \n");
    scanf("%f", &phyM);
    printf("Enter marks obtained in Chemistry: \n");
    scanf("%f", &chemM);
    printf("Enter marks obtained in Maths: \n");
    scanf("%f", &mathsM);
    sum = (phyM+chemM+mathsM);
    perc = (sum/300) * 100;
    printf("PCM total marks are: %.2f\n", sum);
    printf("PCM percentage is %.2f%%\n", perc);
    (perc >= 50)? printf("Eligible for admission\n"):printf("Not Eligible for admission\n");

    return 0;
}