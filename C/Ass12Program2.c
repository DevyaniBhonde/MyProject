#include <stdio.h>
#include <stdbool.h>

bool CheckZero(int iNo)
{
      int iDigit = 0;
      bool bResult =false;
      if(iNo < 0)
      {
        iNo =-iNo;
      }
      while(iNo != 0)
      {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bResult = true;
            break;
        }
        else
        {
            bResult = false;
            break;
        }
        iNo = iNo /10;
      }
      return bResult;
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the value :");
    scanf("%d",&iValue);
    
    bRet = CheckZero(iValue);
    if(bRet == true)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}