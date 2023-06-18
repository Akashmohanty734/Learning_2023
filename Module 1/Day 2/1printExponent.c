/*Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators

*/
#include <stdio.h>

void printExponent(double num) {
    unsigned long long *p = (unsigned long long *)&num;
    unsigned long long exponent = (*p >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
