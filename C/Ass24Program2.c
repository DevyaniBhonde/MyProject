#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch =  ch +32;
        printf("%c",ch);
    }
    else if(ch >='a' && ch <= 'z')
    {
        ch = ch -32;
        printf("%c",ch);
    }
}
int main()
{
   char cValue = '\0';
    bool bRet = false;

    printf("Enter the chracter:");
    scanf("%c",&cValue);
    
    printf("Answer is:");
    Display(cValue);
    
    return 0;
}