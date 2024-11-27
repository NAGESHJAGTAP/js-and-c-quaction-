// 44. Given a string, return all possible substrings of that string. This includes all substrings of every length, from length 1 to the length of the string itself.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}