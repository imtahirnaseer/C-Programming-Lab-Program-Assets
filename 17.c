#include <stdio.h>
int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits: %d\n", countDigits(num));
    printf("Sum of digits: %d\n", sumDigits(num));
    return 0;
}
