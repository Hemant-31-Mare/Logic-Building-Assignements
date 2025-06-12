/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which accept temperature in Faherenheit and convert
//   it into celcius.(1 Celcius = (Fahrenheit - 32)*(5/9))   
//
//  Input :  10
//  Output :  -12.2222 
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double Con = 0.0;
    Con = ((fTemp - 32)*(5.0/9.0));
    return Con;

}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit  \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Faherenheit to celcius conversion is   %lf",dRet);

    return 0;
}