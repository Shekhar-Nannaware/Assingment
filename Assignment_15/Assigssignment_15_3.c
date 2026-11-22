
////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts two numbers and checks whether the
//     numbers are equal or not.
//
//  Input  : 10  10
//  Output : Equal
//
//  Input  : 10  12
//  Output : Not Equal
//
//  Input  : 10  -10
//  Output : Not Equal
//
//  Function Name : ChkEqual
//  Input         : Two Integers
//  Output        : BOOL
//  Description   : This function checks whether the given two numbers
//                  are equal or not.
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
//  Function Name : ChkEqual
//  Input         : Two Integers
//  Output        : BOOL
//  Description   : Checks whether the given two numbers are equal or not.
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 10  10
//  Output : Equal
//
//  Test Case 2:
//  Input  : 10  12
//  Output : Not Equal
//
//  Test Case 3:
//  Input  : 10  -10
//  Output : Not Equal
//
////////////////////////////////////////////////////////////////////////////////
