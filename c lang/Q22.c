// 22. Write a program to find the length of a given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}