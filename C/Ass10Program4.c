#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * 5/9;

    return dCelsius;
}
int main()
{
    float fValue = 0.0;
    double dResult = 0.0;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dResult = FhToCs(fValue);
    printf("%.f Fahrenheit = %.4f celsuis",fValue,dResult);

    return 0;
}