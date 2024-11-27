// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3



#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int even_count = 0;
    int odd_count = 0;
    int i;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even: %d, Odd: %d\n", even_count, odd_count);

    return 0;
}
