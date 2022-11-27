#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    return false;
}
int main()
{
    int iValue = 0;
    bool bResult = false;
    printf("Enter the value:");
    scanf("%d",&iValue);
    bResult = CheckGreater(iValue);
    if(bResult == true)
    {
        printf("%d is greater than 100",iValue);
    }
    else
    {
        printf("%d is not greater than 100",iValue);
    }

    return 0;
}