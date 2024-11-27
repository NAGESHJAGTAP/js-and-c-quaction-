// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".
#include <stdio.h>

int main() {
    char str[]="hello"; 
    int n;
    int i;
    for (i = 0; i < 3; i++) {
        printf("%s", str);
    }
    return 0;
}