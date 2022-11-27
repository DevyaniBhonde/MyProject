#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int EvenFact = 1;
    int OddFact = 1;
    int DiffFact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            EvenFact = EvenFact *iCnt;
        }
        else
        {
            OddFact = OddFact *iCnt;
        }
    }
    DiffFact = EvenFact - OddFact;
    return DiffFact;
}
int main()
{
    int iValue = 0;
    int iResult = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);
    
    iResult = FactorialDiff(iValue);
    printf("Differnce betn even and odd factorial of %d is %d",iValue,iResult);
}