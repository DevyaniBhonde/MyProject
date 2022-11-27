#include <stdio.h>

void StrtoggleX(char *str)
{
    
    if(str == NULL)
    {
        return;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str + - 32;
        }
       
        str++;
    }
    
    
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    StrtoggleX(ch);
    printf("Modified string is : %s",ch);

    return 0;
}