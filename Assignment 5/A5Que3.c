/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program which Accept number from user and print its number//
//   line  .                                                                               //  
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}