#include <stdio.h>

double AreaOfRectangle(float fWidth,float fHeigth)
{
    double dArea = 0.0;
    dArea = fWidth * fHeigth;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dResult =0.0;
    printf("Enter the width and height of rectangle :");
    scanf("%f %f",&fValue1,&fValue2);
    
    dResult = AreaOfRectangle(fValue1,fValue2);
    printf("Area of rectangle with %.2f width and %.2f height is :%.3f",fValue1,fValue2,dResult);

    return 0;
    
}