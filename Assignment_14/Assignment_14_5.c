
////////////////////////////////////////////////////////////////////////////////
//
//  1. Write a program which accept number from user and return Difference
//     between summation of all its factors and non factors.
//
//  Input :     12
//  Output :    -34     (16 - 50)
//
//  Input :     10
//  Output :    -29     (8 - 37)
//
//  Function Name : FactDiff
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the difference between the
//                  summation of all factors and non factors.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the difference between the
//                  summation of all factors and non factors.
//
////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iFact = 0, iNonFact = 0, iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
        else
        {
            iFact = iFact + iCnt;
        }
    }

    iDiff = iFact - iNonFact;

    return iDiff;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 12
//  Output : -34
//
//  Test Case 2:
//  Input  : 10
//  Output : -29
//
////////////////////////////////////////////////////////////////////////////////
