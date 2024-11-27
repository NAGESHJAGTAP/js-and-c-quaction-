//38. Given a temperature in Celsius, convert it to Fahrenheit. Example:Input: 0 Output: 32.

#include <stdio.h>

int main() {
    int celsius=0;
    int fahr=0;
    fahr = (celsius *9 /5) + 32;
    printf("%d", fahr);

    return 0;
}
