#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    int flag = 0;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is not a Palindrome\n", str);
    return 0;
}
