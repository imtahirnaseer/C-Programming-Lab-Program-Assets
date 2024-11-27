#include <stdio.h>
int main() {
    int a, b, quotient, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    quotient = a / b;
    remainder = a % b;
    printf("Quotient: %d, Remainder: %d\n", quotient, remainder);
    return 0;
}


