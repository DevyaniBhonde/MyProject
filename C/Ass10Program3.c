#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iResult = 0;
    iResult = iNo * 1000;
    return iResult;
}
int main()
{
    int iValue = 0;
    int iResult = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);

    iResult = KMtoMeter(iValue);
    printf("%d KM = %d meter",iValue,iResult);

    return 0;
}