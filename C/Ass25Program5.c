#include <stdio.h>

void Reverse(char *str)
{
     char *start =str;
     char *end =str;
     char temp='\0';

   while (*end != '\0')
   {
    /* code */
    end++;
   }
   end--;
   
    while (start < end)
    {
        /* code */
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
       
    }
    
    
}
int main()
{
    char ch[20];
    int iRet = 0;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
     Reverse(ch);
    printf("Reverse string is:%s",ch);

    return 0;
}