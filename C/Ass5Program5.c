#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iResult =0;

    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact =iSumFact + iCnt;
        }
    }
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNonFact =iSumNonFact + iCnt;
        }
    }
    iResult = iSumFact - iSumNonFact;

    return iResult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}