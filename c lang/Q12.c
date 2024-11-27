// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array



#include <stdio.h>

int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int len = sizeof(arr) / sizeof(arr[0]);
   int Arr2[len + 1];
   for(int i = 0; i < len; i++) {
       Arr2[i] = arr[i];
   }
   Arr2[len] = 6;
   printf("arr: ");
   for (int i = 0; i < len + 1; i++) {
       printf("%d ", Arr2[i]);
   }
   printf("\n");

   return 0;
}



