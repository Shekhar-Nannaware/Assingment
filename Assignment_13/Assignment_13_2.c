
///////////////////////////////////////////////////
//
//  Accept number from user and return the count of
//  odd digits.
//
//  Function Name   :   CountOdd
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns the count of odd digits
//  Date            :   21/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CountOdd
//  Description     :   Returns the count of odd digits
//
///////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0, iCount = 0;

    // Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 != 0)
        {
            iCount = iCount + 1;
        }

        iNo = iNo / 10;
    }

    return iCount;
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

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      2395        3
//      1018        2
//      -1018       2
//      8462        0
//-------------------------------------------------
///////////////////////////////////////////////////
