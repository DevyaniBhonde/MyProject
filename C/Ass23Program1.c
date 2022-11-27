#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    char cValue ='a';
    bool result = false;
    for(int i=cValue;i<'z';i++)
    {
        if(i==ch)
        {
            result = true;

        }
    }
    return result;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the chracter");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is charcter");
    }
    else{
        printf("It is no character");
    }
    return 0;
}