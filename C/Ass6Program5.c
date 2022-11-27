#include<stdio.h>

int DisplayPercentage(int iValue1,int iValue2)
{
    float fResult = 0;
    if(iValue2 == 0 || iValue1 == 0)
    {
        fResult = 0;
    }
    else
    {
        fResult = (float)iValue2/iValue1 *100.0;
    }
    
    return fResult;
}
int main()
{
    int iTotal = 0;
    int iObtained  = 0;
    float fPercentage = 0;

    printf("Total marks and Obtained marks are :");
    scanf("%d %d",&iTotal,&iObtained);

    fPercentage = DisplayPercentage(iTotal,iObtained);
    printf("The percentage is :%.2f%%",fPercentage);

    return 0;
}