/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//   Problem statement : Accept one character from user and check whether that character   //
//   is vowel (a,e,i,o,u) or not.                                                          //  
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char cChar)
{
    if(cChar == 'a'||cChar == 'e'||cChar == 'i'||cChar =='o'||cChar =='u'||
    cChar == 'A'   ||cChar == 'E'||cChar == 'I'||cChar =='O'||cChar =='U')
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else{
        printf("It is not vowel\n");
    }
}