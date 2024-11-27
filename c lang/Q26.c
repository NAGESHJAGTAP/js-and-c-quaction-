// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.
# include <stdio.h>
# include <string.h>
int main(){
 char str[]="codinggita" ;
 int len=strlen(str);
 int i=0;
 for(i=0;i<len;i++){
     if(str[len-1]=='a'){
         printf("true");
         break;
     }else{
         printf("false");
     }
 }
 return 0;
}