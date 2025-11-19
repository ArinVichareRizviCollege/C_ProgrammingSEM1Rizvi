/******************************************************************************
 Name: Arin Vichare, Class: FE Mech, Div: F, Roll no: 40, UIN: 251M046

*******************************************************************************/
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial (Recursive) = %lld\n", factorial(n));

    return 0;
}
