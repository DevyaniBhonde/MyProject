#include <stdio.h>

int DollorIntoINR(int iNo)
{
    int iMulti = 0;
    iMulti = iNo * 70;

    return iMulti;
}
int main()
{
    int iValue = 0;
    int iResult = 0;
    printf("Enter the value:");
    scanf("%d",&iValue);

    iResult =DollorIntoINR(iValue);
    printf("%d Doller coversion in INR is :%d",iValue,iResult);

    return 0;
}