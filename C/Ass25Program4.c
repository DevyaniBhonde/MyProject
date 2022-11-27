#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char *str)
{
    if(str == NULL)
    {
        return false;
    }
    while(*str != '\0')
    {
        if(*str =='a' || *str == 'e'|| *str =='i' || *str =='o' ||*str =='u')
        {
            return true;
        }
        str++;
    }
}

int main()
{
    char ch[20];
    bool Ret = false;
    printf("Enter the string:");
    scanf("%[^'\n']s",ch);
    
    Ret = CheckVowel(ch);
    if(Ret == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}