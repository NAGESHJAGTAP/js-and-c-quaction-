// 46. Given a string, return the index of the first repeating character. If no character repeats, return -1.
// Input: "hello"
// Output: 2 (because 'l' repeats first)



# include <stdio.h>
# include <string.h>
int main(){
    char str[]="hello";
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++){
        if(str[i]==str[i+1]){
            printf("%d",i);
        }
    }
}