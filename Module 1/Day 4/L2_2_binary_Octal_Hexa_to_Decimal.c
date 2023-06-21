// Binary/Octal/Hex to Decimal Conversion

#include <stdio.h>
#include<math.h>
#include <stdlib.h>


int binaryToDecimal(long long binary)
{
    int decimal=0;
    int power=0;
    
    while(binary)
    {
        int digit=binary%10;
        decimal=decimal+digit*pow(2,power);
        binary/=10;
        power++;
    }
    return decimal;
}


int octalToDecimal(int octal)
{
    int decimal=0;
    int power=0;
    
    while(octal>0)
    {
        int digit = octal%10;
        decimal=decimal+digit*pow(8,power);
        octal/=10;
        power++;
    }
    return decimal;
}

int hexToDecimal(char hex[50])
{
    int decimal;
    decimal= strtol(hex,NULL,16);
    
    return decimal;
}

int main()
{
    long long binary;
    printf("Enter binary number\n");
    scanf("%lld",&binary);
    printf("Binary to Decimal Representation is %d\n",binaryToDecimal(binary));
    
    int octal;
    printf("Enter Octal number\n");
    scanf("%d",&octal);
    printf("Octal to Decimal Representation is %d\n",octalToDecimal(octal));
    
    char hex[50];
    printf("Enter Hexadeciaml number\n");
    scanf("%s",hex);
    printf("Hexadecimal to Decimal Representation is %d\n",hexToDecimal(hex));
    
    
    return 0;
}
