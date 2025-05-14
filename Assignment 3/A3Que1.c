/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Write a program accept one number from user and print that number //
//   of even numbers on screen.                                                            //  
/////////////////////////////////////////////////////////////////////////////////////////////

void printEven(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
        return ;
    }
    for(i = 1;i<= iNo;i++)
    {
        printf("%d\n",2*i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}