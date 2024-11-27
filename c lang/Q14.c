// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4]
#include <stdio.h>

int main() {
  int arr[]={1,2,3,4};
  int len=sizeof(arr)/sizeof(arr[0]);
    int arr1[len+1];

  int i;
  for(i=0;i<=len;i++){
      arr1[i]=arr[i-1];
  
      printf("%d",arr1[i]);

  }
    return 0;
}
