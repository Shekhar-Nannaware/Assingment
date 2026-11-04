/*
    Write a program which returns difference between Even Factorial
    and Odd Factorial of given number.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   FactorialDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns difference between Even Factorial
//                      and Odd Factorial
//  Date            :   04/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iAns = 0, iResult1 = 1, iResult2 = 1;

    while (iNo != 0)
    {
        if ((iNo % 2) == 0)
        {
            iResult1 = iResult1 * iNo;
        }
        else
        {
            iResult2 = iResult2 * iNo;
        }

        iNo--;
    }

    iAns = iResult1 - iResult2;

    return iAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           -7      (Even: 8, Odd: 15)
//      6           33      (Even: 48, Odd: 15)
//      4           5       (Even: 8, Odd: 3)
//      3           -1      (Even: 2, Odd: 3)
//      2           1       (Even: 2, Odd: 1)
//      1           0       (Even: 1, Odd: 1)
//      0           0
//-------------------------------------------------
///////////////////////////////////////////////////