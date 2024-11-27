// 24. Write a program to remove whitespace from both ends of a string.Example: Input: " hello ", Output: "hello".
#include <stdio.h>
#include <string.h>

int main() {
  char str[]=" hello ";
  int i;
  int len=strlen(str);
  for(i=0;i<len;i++){
      if(str[i]!=' '){
          
     
          printf("%c",str[i]);
         
      }
  
}
 
    return 0;
}
