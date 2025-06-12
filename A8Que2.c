/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which accept width and height of rectangle from user
//   and calculate its area . (Area = width * Height)
//
//  Input : 5.3   9.78
//  Output :  5183
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
float PI = 3.14;
double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0;
    Area = fWidth * fHeight;
    return Area;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;

    double dRet = 0.0;
    printf("Enter width  \n");
    scanf("%f",&fValue1);

    printf("Enter Height  \n");
    scanf("%f",&fValue2);
    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is  %lf",dRet);

    return 0;
}