/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which accept area in square feet and convert it into 
//   square meter. ( 1 square feet = 0.0929 square meter)
//
//  Input : 5
//  Output :  0.464515
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double squareMeter(float iNo)
{
    double meter = 0.0;
    meter = iNo * 0.09929;
    return meter;

}
int main()
{
    float iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet \n");
    scanf("%f",&iValue);

    dRet = squareMeter(iValue);

    printf("Square feet into square meter   %lf ",dRet);

    return 0;
}