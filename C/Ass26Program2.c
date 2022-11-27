#include <stdio.h>

void StruprX(char *str)
{
    
    if(str == NULL)
    {
        return;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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
    
    StruprX(ch);
    printf("Upper case string is : %s",ch);

    return 0;
}