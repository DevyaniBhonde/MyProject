#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt = 0;
    bool bRet = false;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bRet =true;
            break;
        }
    }
    
    return bRet;
}

int main()
{
    int iSize = 0;
    bool bResult = 0;
    int iCnt = 0;
    int *p = NULL;
    printf("Enter the size :");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int)*iSize);
    
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf("Enter %d elements:",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    bResult = Check(p,iSize);
    if(bResult == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    
    free(p);

    return 0;
}