//  41. Given a valid IP address, you are asked to return a defanged version of that IP address. A defanged IP address replaces every period "." with "[.]".
// Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"
 
 
 #include <stdio.h>
#include <string.h>

int main() {
    char str[] = "1.1.1.1";
    char  str2[100];
    int len=strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '.') {
            str2[j++] = '[';
           str2[j++] = '.';
            str2[j++] = ']';
        } else {
            str2[j++] = str[i];
        }
    }
  str2[j] = 

    printf("%s\n", str2);
    printf("%d",len);
    return 0;
}










// Example2:Input: address = "255.100.50.0" output: "255[.]100[.]50[.]0"
 #include <stdio.h>
#include <string.h>

int main() {
    char str[] = "255.100.50.0";
    char  str2[100];
    int len=strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '.') {
            str2[j++] = '[';
           str2[j++] = '.';
            str2[j++] = ']';
        } else {
            str2[j++] = str[i];
        }
    }
  str2[j] = 

    printf("%s\n", str2);
    printf("%d",len);
    return 0;
}