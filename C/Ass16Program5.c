#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProd = 1;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProd = iProd * Arr[iCnt];
        }
        
    }
    
    return iProd;
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
    iResult = Product(p,iSize);
    printf("Product is:%d",iResult);
    
    free(p);

    return 0;
}
