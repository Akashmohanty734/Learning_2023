//Decimal to Binary/Octal/Hex Conversion


#include <stdio.h>

void decToBinary(int decimal)
{
    int binary[50];
    int index=0;
    
    while(decimal)
    {
        binary[index]=decimal % 2;
        decimal/=2;
        index++;
    }
    printf("\nDecimal To Binary Representation\n");
    for(int i=index-1 ; i>=0 ; i--)
        printf("%d",binary[i]);
}

void decToOctal(int decimal)
{
    int octal[50];
    int index=0;
    while(decimal)
    {
        octal[index]=decimal % 8;
        decimal/=8;
        index++;
    }
    printf("\nDecimal To Octal Representation\n");
    for(int i=index-1 ; i>=0 ; i--)
        printf("%d",octal[i]);
}

void decToHex(int decimal)
{
    int hex[32];
    int index=0;
    while(decimal)
    {
        hex[index]=decimal%16;
        decimal/=16;
        index++;
    }
    
    printf("\nDecimal To Hexadecimal Representation\n");
    for(int i=index-1 ; i>=0 ; i--)
        printf("%x",hex[i]);
}





int main()
{
    int decimal,choice;
    printf("Enter decimal number\n");
    scanf("%d",&decimal);
    
    printf("Enter 1.Decimal To Binary Representation\n2.Decimal To Octal Representation\n3.Decimal To Hexadecimal Representation\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1: decToBinary(decimal);break;
        case 2: decToOctal(decimal);break;
        case 3: decToHex(decimal);break;
        default : printf("Please try again\n");
    
    }

    return 0;
}
