#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int MultResult = 1;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
           MultResult = MultResult *iCnt;
        }
    }
    return MultResult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}