#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    char cValue ='A';
    bool result = false;
    for(int i=cValue;i<'Z';i++)
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
        printf("It is Captial charcter");
    }
    else{
        printf("It is not Capital character");
    }
    return 0;
}