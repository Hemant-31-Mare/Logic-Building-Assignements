/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which accept distance in Kilometer and convert it into 
//   meter. (1 Kilometer = 1000 Meter).
//
//  Input : 5
//  Output :  5000
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int KM = 0;
    KM = iNo * 1000;
    return KM;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter distance  \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Kilometer to meter is  %d",iRet);

    return 0;
}