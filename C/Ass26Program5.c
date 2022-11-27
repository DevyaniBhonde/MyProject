#include <stdio.h>

int WhiteSpace(char *str)
{
    int iCount = 0;
    if(str == NULL)
    {
        return 0;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str == ' ')
        {
            iCount++;
        }
        
        str++;
    }
    
    return iCount;
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    iRet = WhiteSpace(ch);
    printf("Count of white space is : %d",iRet);

    return 0;
}