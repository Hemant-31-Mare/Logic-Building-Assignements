/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which returns difference between Even factorial and 
//   odd factorial of given number.
//
//  Input : 5
//  Output :  -7 (8 - 15)
// 
//  Input : -5 
//  Output :  -7 (8 - 15)
// 
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 0;
    int iFactOdd = 1;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iCnt * iFactEven;
        }
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFactOdd = iCnt * iFactOdd;
        }
    }
    return iFactEven - iFactOdd;


}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number  \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is  %d",iRet);

    return 0;
}