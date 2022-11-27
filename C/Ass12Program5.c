#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iResult = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);
    iResult = Count(iValue);
    printf("Number less than 6 in given digit is :%d",iResult);

    return 0;
}