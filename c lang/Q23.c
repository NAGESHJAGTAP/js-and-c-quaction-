// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".
# include <stdio.h>
# include <string.h>
int main(){
 char str1[]="hello" ;
 char str2[]="world";
 strcat(str1,str2);
 printf("%s",str1);
}
