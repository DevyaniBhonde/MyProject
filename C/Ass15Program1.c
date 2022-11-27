#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int Count = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2==0)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int iSize = 0;
    int iResult = 0;
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
    
    iResult = CountEven(p,iSize);
    printf("Frequency of even number in array is:%d",iResult);
    free(p);

    return 0;
}