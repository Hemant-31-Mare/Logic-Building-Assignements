/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program which Accept  N and print first 5 multiples of N  //
//                                                                                         //  
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d  ",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}