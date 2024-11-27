// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

 #include <stdio.h>

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int all_positive = 1; 

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) { 
            all_positive = 0;
            break;
        }
    }

    printf("%s\n", all_positive ? "true" : "false");

    return 0;
}
