/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program which Accept  N number from user and print  all   //
//   odd number up to to N .                                                               //  
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d  ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}