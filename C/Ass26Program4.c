#include <stdio.h>

int DisplayDigit(char *str)
{
    int arr[10];
    int i= 0;
    if(str == NULL)
    {
        return;
    }
    while (*str != '\0')
    {
        /* code */
        if(*str >= '0' && *str <= '9')
        {
           arr[i]= str;
           i++;
        }  
        str++;
    }
    return arr;
    
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    iRet =DisplayDigit(ch);
    

    return 0;
}