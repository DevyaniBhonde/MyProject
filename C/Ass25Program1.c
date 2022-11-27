#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    if(str == NULL)
    {
        iCnt = 0;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    iRet = CountCapital(ch);
    printf("%d",iRet);

    return 0;
}