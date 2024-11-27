// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".
#include <stdio.h>

int main() {
    char str[] = "hello";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);

    return 0;
}



