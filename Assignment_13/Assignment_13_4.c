
///////////////////////////////////////////////////
//
//  Accept number from user and return multiplication
//  of all digits.
//
//  Function Name   :   MultDigit
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns multiplication of all
//                      digits
//  Date            :   21/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   MultDigit
//  Description     :   Returns multiplication of all digits
//
///////////////////////////////////////////////////

int MultDigit(int iNo)
{
    int iDigit = 0, iCount = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        iCount = iCount * iDigit;

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

    iRet = MultDigit(iValue);

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
//      2395        270
//      1018        8
//      4521        40
//      9922        324
//-------------------------------------------------
///////////////////////////////////////////////////
