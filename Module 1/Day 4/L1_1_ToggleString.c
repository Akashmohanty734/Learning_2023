#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Enter String\n");
    fgets(str,30,stdin);
    
    
    for(int i=0; str[i]!='\0' ; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
        else
        {
            continue;
        }
        
    }
    for(int i=0 ;str[i]!='\0' ;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
