
////////////////////////////////////////////////////////////////////////////////
//
//  1. Write a program which accept number from user and return Summation of
//     all its non factors.
//
//  Input :     12
//  Output :    50
//
//  Input :     10
//  Output :    37
//
//  Function Name : SumNonFact
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the summation of all non factors
//                  of the given number.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the summation of all non factors
//                  of the given number.
//
////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    iCnt = 1;

    while(iCnt < iNo)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }

        iCnt++;
    }

    return iSum;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 12
//  Output : 50
//
//  Test Case 2:
//  Input  : 10
//  Output : 37
//
////////////////////////////////////////////////////////////////////////////////
