
///////////////////////////////////////////////////
//
//  Accept number from user and return difference
//  between summation of even digits and summation
//  of odd digits.
//
//  Function Name   :   CountDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns difference between sum
//                      of even digits and odd digits
//  Date            :   21/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CountDiff
//  Description     :   Returns difference between sum
//                      of even digits and odd digits
//
///////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0, iAns = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iAns = iEvenSum - iOddSum;

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

    iRet = CountDiff(iValue);

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
//      2395        -15
//      1018         6
//      2395         6
//      5733       -18
//-------------------------------------------------
///////////////////////////////////////////////////
