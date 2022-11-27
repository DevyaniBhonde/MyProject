#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    int Value =0;
    bool result = false;
    for(int i=Value;i<=9;i++)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the chracter:");
    scanf("%d",&iValue);

    bRet = CheckAlpha(iValue);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else{
        printf("It is not Digit");
    }
    return 0;
}