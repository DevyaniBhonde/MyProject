#include <stdio.h>

double SquareMeter(int iNo)
{
    double dMeter = 0.0;
    dMeter = iNo * 0.0929;
    
    return dMeter;
}
int main()
{
    int iValue = 0;
    double dResult = 0.0;
    printf("Enter the value :");
    scanf("%d",&iValue);

    dResult = SquareMeter(iValue);
    printf("%d square feet = %.4f square meter",iValue,dResult);

    return 0;
}