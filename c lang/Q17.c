// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50].
#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int positive_count = 0; 
    int negative_count = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);

    return 0;
}