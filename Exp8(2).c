#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++);

    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
