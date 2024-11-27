 
 qu 16
 
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





qu 17

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








Q 18

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Ele at even ind: ");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { 
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}













Q19
#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = isSorted(arr, n);

    if (result == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}



















  fibonacci

# include <stdio.h>
int fib(int num){
    if(num==0){
        return 0;
    }else if(num==1){
        return 1;
    }else{
        return fib(num-1)+(num-2);
    }
    
}
int main(){
    int num=5;
    int i;
    for(i=0;i<5;i++){
       printf("%d\n",fib(i));
    }
}















