/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program which accept number from user and display its     //
//    table.                                                                               //  
/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1;iCnt <= 10 ;iCnt++)
    {
        printf("%d\n",iCnt*2);
    }
    

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}
