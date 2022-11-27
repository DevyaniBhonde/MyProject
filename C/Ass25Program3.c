#include <stdio.h>

int Differnce(char *str)
{
    int iCntCap = 0,iCntSmall = 0,iCnt;
    if(str == NULL)
    {
        iCnt = 0;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCap++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        str++;
    }
    iCnt = iCntSmall - iCntCap;
    return iCnt;
    
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    iRet = Differnce(ch);
    printf("The differnce in capital and small case are %d",iRet);

    return 0;
}