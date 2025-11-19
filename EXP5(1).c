/******************************************************************************
 Name: Arin Vichare, Class: FE Mech, Div: F, Roll no: 40, UIN: 251M046

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial (Iterative) = %lld\n", fact);

    return 0;
}
