// 4. Write a function to check whether a given character is a vowel or consonant.
#include <stdio.h>

int main(){
    char str;
    printf("Enter a character: ");
    scanf(" %c",&str); 
    if((str=='A'||str=='a')||(str=='E'||str=='e')||(str=='I'||str=='i')||(str=='O'||str=='o')||(str=='U'||str=='u')){
        printf("%c is a vowel.\n",str);
    }    
    return 0;  
}





