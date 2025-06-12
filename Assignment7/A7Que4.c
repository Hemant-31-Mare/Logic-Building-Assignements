/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program to find odd factorial of given number .
//   
//
//  Input : 5
//  Output :  15 (5 * 3 * 1)
// 
//  Input : -5 
//  Output :  8 (5 * 3 * 1)
// 
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iCnt * iFact;
        }
    }
    return iFact;


}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number  \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}