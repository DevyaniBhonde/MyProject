#include <stdio.h>
#include <stdbool.h>

bool Display(char ch)
{
    if(ch >='!' && ch <= '-')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the chracter:");
    scanf("%c", &cValue);

    printf("Answer is:");
    bRet = Display(cValue);
    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}