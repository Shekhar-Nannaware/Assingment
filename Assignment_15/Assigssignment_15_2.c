
////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts one number from user and checks whether
//     that number is greater than 100 or not.
//
//  Input  : 101
//  Output : Greater
//
//  Input  : 39
//  Output : Smaller
//
//  Function Name : ChkGreater
//  Input         : Integer
//  Output        : BOOL
//  Description   : This function checks whether the given number is greater
//                  than 100 or not.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Input         : Integer
//  Output        : BOOL
//  Description   : Checks whether the given number is greater than 100.
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number : ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 101
//  Output : Greater
//
//  Test Case 2:
//  Input  : 39
//  Output : Smaller
//
//  Test Case 3:
//  Input  : 100
//  Output : Smaller
//
////////////////////////////////////////////////////////////////////////////////
