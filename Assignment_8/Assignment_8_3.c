
/*
    3] Write a program to find factorial of given number.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Calculates factorial of given number
//  Date            :   30/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iCnt * iFact;       // Business Logic

        printf("%d\t", iCnt);
    }

    return iFact;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("\nFactorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           120
//      4           24
//      3           6
//      2           2
//      1           1
//      0           1
//      -5          120
//-------------------------------------------------
///////////////////////////////////////////////////
