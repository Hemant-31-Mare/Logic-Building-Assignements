/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program which accept number from user and display its     //
//   multiplication of factors .                                                            //  
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1 ; iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;

        }

    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}