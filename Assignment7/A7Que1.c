/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//   Problem statement : Write a program which Accept  number from user and display below  
//   below pattern      
//
//  Input : 5 
//  Output :    *   *   *   *   *   #   #   #   #   #
//  Input : -5 
//  Output :    *   *   *   *   *   #   #   #   #   #
// 
// 
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
        
    }
    for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
        
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