/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program to find factorial of given number .               //
//                                                                                         //  
/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int Display(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}
