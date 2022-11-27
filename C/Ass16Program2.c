#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iIndex= 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            break;
        }
        else
        {
            iIndex = -1;
        }
    }
    
    return iIndex;
}

int main()
{
    int iSize = 0;
    int iResult = 0;
    int iCnt = 0;
    int iNo = 0;
    int *p = NULL;
    printf("Enter the size :");
    scanf("%d",&iSize);
    
    printf("Enter the number:");
    scanf("%d",&iNo);
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
    iResult = FirstOcc(p,iSize,iNo);
    printf("Index of %d is:%d",iNo,iResult);
    
    free(p);

    return 0;
}
