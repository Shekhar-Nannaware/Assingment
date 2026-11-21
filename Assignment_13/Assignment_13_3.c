
///////////////////////////////////////////////////
//
//  Accept number from user and return the count of
//  digits in between 3 and 7.
//
//  Function Name   :   CountRange
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns the count of digits
//                      in between 3 and 7
//  Date            :   21/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CountRange
//  Description     :   Returns the count of digits
//                      in between 3 and 7
//
///////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit >= 3 && iDigit <= 7)
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

    iRet = CountRange(iValue);

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
//      2395        1
//      1018        0
//      4521        2
//      9922        0
//-------------------------------------------------
///////////////////////////////////////////////////
