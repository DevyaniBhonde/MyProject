#include <stdio.h>

void StrlwrX(char *str)
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
       
        str++;
    }
    
    
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    StrlwrX(ch);
    printf("Small case string is : %s",ch);

    return 0;
}