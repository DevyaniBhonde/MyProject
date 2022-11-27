#include<stdio.h>

double AreaOfCircle(float fRadius)
{
    double dArea = 0.0;
    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dResult = 0.0;
    printf("Enter the radius :");
    scanf("%f",&fValue);
  
    dResult = AreaOfCircle(fValue);
    printf("Area of circle with %.1f radius is %.4f",fValue,dResult);

    return 0;
}