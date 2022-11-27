#include <stdio.h>
#include <stdbool.h>

void Display(char ch)
{
    int iCount = 0;

    while (iCount <= 25)
    {
        if (ch >= 'A' && ch <= 'Z')
        {   
            printf("%c ", ch);
            ch++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("%c ", ch);
            ch++;
        }
        iCount++;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the chracter:");
    scanf("%c", &cValue);

    printf("Answer is:");
    Display(cValue);

    return 0;
}