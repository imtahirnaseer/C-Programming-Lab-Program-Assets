# C-Programming-Lab-Program-Assets

This repository contains a collection of C programming examples that cover various topics, including basic programs, iterative structures, arrays, strings, functions, recursion, and file operations.

## Table of Contents

1. [C Programs](#c-programs)
     - [Hello, World! Program](#1-c-hello-world-program)
     - [C Program to Add Two Integers](#2-c-program-to-add-two-integers)
     - [C Program to Find ASCII Value of a Character](#3-c-program-to-find-ascii-value-of-a-character)
     - [C Program to Compute Quotient and Remainder for Integer Division](#4-c-program-to-compute-quotient-and-remainder-for-integer-division)
     - [C Program to Find the Size of Data Types](#5-c-program-to-find-the-size-of-data-types)
     - [C Program to Swap Two Numbers](#6-c-program-to-swap-two-numbers)
     - [C Program to Check Whether a Number is Even or Odd](#7-c-program-to-check-whether-a-number-is-even-or-odd)
     - [C Program to Find the Largest Number Among Three Numbers](#8-c-program-to-find-the-largest-number-among-three-numbers)
     - [C Program to Find All Roots of a Quadratic Equation](#9-c-program-to-find-all-roots-of-a-quadratic-equation)
     - [C Program to Check Leap Year](#10-c-program-to-check-leap-year)
     - [C Program to Check Whether a Number is Positive or Negative](#11-c-program-to-check-whether-a-number-is-positive-or-negative)
     - [C Program to Calculate the Sum of Natural Numbers](#12-c-program-to-calculate-the-sum-of-natural-numbers)
     - [C Program to Find Factorial of a Number](#13-c-program-to-find-factorial-of-a-number)
     - [C Program to Display Multiplication Table](#14-c-program-to-display-multiplication-table)
     - [C Program to Display Fibonacci Sequence](#15-c-program-to-display-fibonacci-sequence)
     - [C Program to Display All Odd Numbers from 1 to 50](#16-c-program-to-display-all-odd-numbers-from-1-to-50)
     - [C Program Using Recursive Function to Count Digits and Their Sum](#17-c-program-using-recursive-function-to-countdigits-and-their-sum)
     - [C Program to Count Number of Digits in an Integer](#18-c-program-to-count-number-of-digits-in-an-integer)
     - [C Program to Reverse a Number](#19-c-program-to-reverse-a-number)
     - [C Program to Check Whether a String is Palindrome](#20-c-program-to-check-whether-a-string-is-palindrome)
     - [C Program to Check Whether a Number is Prime](#21-c-program-to-check-whether-a-number-is-prime)
     - [C Program to Display Prime Numbers Between Two Intervals](#22-c-program-to-display-prime-numbers-between-two-intervals)
     - [C Program to Check Armstrong Number](#23-c-program-to-check-armstrong-number)
     - [C Program to Find the Sum of Two Matrices](#24-c-program-to-find-the-sum-of-two-matrices)
     - [C Program to Reverse a String](#25-c-program-to-reverse-a-string)
     - [C Program to Calculate the Power of a Number Using Function](#26-c-program-to-calculate-the-power-of-a-number-using-function)
     - [C Program to Calculate the Square Root Using Function](#27-c-program-to-calculate-the-square-root-using-function)
     - [C Program to Solve a Quadratic Equation Using the Bhaskara Formula](#28-c-program-to-solve-a-quadratic-equation-using-the-bhaskara-formula)
 
  


## C Programs

### 1. C Hello, World! Program
```c
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}
```
### 2. C Program to Add Two Integers
```c
#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}
```
### 3. C Program to Find ASCII Value of a Character
```c
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of '%c': %d\n", ch, ch);
    return 0;
}
```
### 4. C Program to Compute Quotient and Remainder for Integer Division
```c
#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient: %d, Remainder: %d\n", quotient, remainder);
    return 0;
}
```
### 5. C Program to Find the Size of Data Types
```c
#include <stdio.h>
int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));
    return 0;
}
```
### 6. C Program to Swap Two Numbers
```c
#include <stdio.h>
int main() {
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
```
### 7. C Program to Check Whether a Number is Even or Odd
```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
    return 0;
}
```
### 8. C Program to Find the Largest Number Among Three Numbers
```c
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the largest\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d is the largest\n", num2);
    else
        printf("%d is the largest\n", num3);
    return 0;
}
```
### 9. C Program to Find All Roots of a Quadratic Equation
```c
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    double discriminant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same: %.2lf\n", root1);
    } else {
        printf("No real roots\n");
    }
    return 0;
}
```
### 10. C Program to Check Leap Year
```c
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);
    return 0;
}
```
### 11. C Program to Check Whether a Number is Positive or Negative
```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is Positive\n", num);
    else
        printf("%d is Negative\n", num);
    return 0;
}
```
### 12. C Program to Calculate the Sum of Natural Numbers
```c
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d\n", num, sum);
    return 0;
}
```
### 13. C Program to Find Factorial of a Number
```c
#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d: %d\n", num, factorial);
    return 0;
}
```
### 14. C Program to Display Multiplication Table
```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
```
### 15. C Program to Display Fibonacci Sequence
```c
#include <stdio.h>
int main() {
    int num, first = 0, second = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci Sequence: ");
    for (int i = 0; i < num; i++) {
        if (i == 0) {
            printf("%d ", first);
            continue;
        }
        if (i == 1) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}
```
### 16. C Program to Display All Odd Numbers from 1 to 50
```c
#include <stdio.h>
int main() {
    for (int i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```
### 17. C Program Using Recursive Function to Count Digits and Their Sum
```c
#include <stdio.h>
int count_digits(int num) {
    if (num == 0) return 0;
    return 1 + count_digits(num / 10);
}
int sum_digits(int num) {
    if (num == 0) return 0;
    return num % 10 + sum_digits(num / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits: %d\n", count_digits(num));
    printf("Sum of digits: %d\n", sum_digits(num));
    return 0;
}
```
### 18. C Program to Count Number of Digits in an Integer
```c
#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
```
### 19. C Program to Reverse a Number
```c
#include <stdio.h>
int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}
```
### 20. C Program to Check Whether a String is Palindrome
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reverse[100];
    int len, i, j, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is not a Palindrome\n", str);
    return 0;
}
```
### 21. C Program to Check Whether a Number is Prime
```c
#include <stdio.h>
int main() {
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime && num > 1)
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is not a Prime Number\n", num);
    return 0;
}
```
### 22. C Program to Display Prime Numbers Between Two Intervals
```c
#include <stdio.h>
int main() {
    int start, end, flag;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        flag = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i > 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```
### 23. C Program to Check Armstrong Number
```c
#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}
```
### 24. C Program to Find the Sum of Two Matrices
```c
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix1[m][n], matrix2[m][n], sum[m][n];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
### 25.  C Program to Reverse a String
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    int i, length;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[i] = '\0';
    
    printf("Reversed string: %s\n", reversed);
    return 0;
}
```
### 26. C Program to Calculate the Power of a Number Using Function
```c
#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}
```
### 27.C Program to Calculate the Square Root Using Function
```c
#include <stdio.h>
#include <math.h>
int main() {
    double number, result;
    printf("Enter a number: ");
    scanf("%lf", &number);
    result = sqrt(number);
    printf("Square root of %.2lf is %.2lf\n", number, result);
    return 0;
}
```
### 28. C Program to Solve a Quadratic Equation Using the Bhaskara Formula
```c
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: root1 = %.2lf, root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same: root1 = root2 = %.2lf\n", root1);
    } else {
        printf("Roots are complex and different\n");
    }
    return 0;
}
```
