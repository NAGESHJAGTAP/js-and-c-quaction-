// 36. Print a pyramid pattern with n rows.

#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5-i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf(" \n");
    }

    return 0;
}






// opposite pyramid pattern 
#include <stdio.h>

int main() {
 
  for (int i = 0; i <= 5; i++) {
    for (int j = 0; j <= i; j++) {
      printf(" ");
    }
    for (int k = 0; k < 1*(5-i)-1; k++) {
      printf(" *");
    }
    printf("\n");
  }
  return 0;
}