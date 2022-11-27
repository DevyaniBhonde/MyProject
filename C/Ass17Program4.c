#include<stdio.h>
#include<stdlib.h>


void Digit(int Arr[],int iLength)
{
    int iCnt = 0;
    int j= 0;
    int Temp[iLength];
    int iCount =0;
    while(j < iLength)
    {
        Temp[j]=Arr[j];
        while(Arr[j] != 0)
        {
            Arr[j]=Arr[j]/10;
            iCount++;
            if(iCount==3)
            {
                printf("%d\n",Temp[j]);
                
            }
        }

       
        j++;
        

    }
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

    printf("3 Digit number are:");
    Digit(p,iSize);
    
    free(p);

    return 0;
}
