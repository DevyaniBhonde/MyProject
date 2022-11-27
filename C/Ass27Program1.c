#include <stdio.h>
#include <stdbool.h>

bool CheckChar(char *str,char ch)
{
    
    if(str == NULL)
    {
        return 0;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str == ch)
        {
            return true;
        }
        
        str++;
    }
    
    return false;
}
int main()
{
    char ch[20];
    char cValue = '\0';
  bool bRet = false;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);

    printf("Enter the character :");
    scanf("%c",&cValue);
    
    bRet = CheckChar(ch,cValue);
   if(bRet == true)
   {
    printf("Character is present");
   }
   else
   {
    printf("Character is absent");
   }

    return 0;
}