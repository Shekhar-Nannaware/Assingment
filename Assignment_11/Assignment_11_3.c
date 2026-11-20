///////////////////////////////////////////////////
//
//  1. Program to Calculate Sum of Numbers in Range
//
//  Function Name   :   RangeSum
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Description     :   Returns addition of all numbers
//                      in the given positive range
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   RangeSum
//  Description     :   Returns addition of range
//
///////////////////////////////////////////////////

int RangeSum(
                int iStart,   // Starting point
                int iEnd      // Ending point
            )
{
    int i = 0, iSum = 0;

    if (iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range \n");
    }
    else
    {
        for (i = iStart; i <= iEnd; i++)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d \n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input   :   23    30
//      Output  :   212
//
//      Input   :   10    18
//      Output  :   126
//
//      Input   :  -10     2
//      Output  :   Invalid Range
//
//      Input   :   90    18
//      Output  :   Invalid Ranges
//-------------------------------------------------
///////////////////////////////////////////////////