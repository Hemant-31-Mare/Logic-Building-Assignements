/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Accept single digit from user and print it into word .            //
//                                                                                         //  
/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo>9)
    {
        printf("Invalid number");
        return;
    }
    switch(iNo)
    {
        case 0:
        printf("Zero \n");
        break;

        case 1:
        printf("One\n");
        break;

        case 2:
        printf("Two");
        break;

        case 3:
        printf("Three");
        break;

        case 4:
        printf("Four");
        break;

        
        case 5:
        printf("Five");
        break;
        
        case 6:
        printf("six");
        break;

        case 7:
        printf("seven");
        break;
        
        case 8:
        printf("Eight");
        break;
        
        case 9:
        printf("Nine");
        break;
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
