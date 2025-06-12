/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which accept radius of circle from user and calculate 
//   its area . Consider value PI as 3.14 . (Area = PI * Radius * Radius)
//
//  Input : 5.3
//  Output :  88.20
// 
//  Input : 10.4
//  Output :  339.62
// 
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
float PI = 3.14;
double CircleArea(int iRadius)
{
    double Area = 0.0;
    Area = iRadius * iRadius* PI; 
    return Area;

}
int main()
{
    float fValue = 0;
    double dRet = 0.0;
    printf("Enter radius  \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is  %lf",dRet);

    return 0;
}