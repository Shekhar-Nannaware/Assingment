///////////////////////////////////////////////////
//
//  5. Program to Convert Square Feet into Square Meter
//
//  Function Name   :   SquareMeter
//  Input           :   Integer
//  Output          :   Double
//  Description     :   Converts area from square feet into square meter
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define SQ_FEET_TO_SQ_METER 0.0929

///////////////////////////////////////////////////
//
//  Function Name   :   SquareMeter
//  Description     :   Converts square feet into square meter
//
///////////////////////////////////////////////////

double SquareMeter(
                    int iValue    // Area in square feet
                  )
{
    double dRet = 0.0;

    dRet = iValue * SQ_FEET_TO_SQ_METER;    // Business Logic

    return dRet;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is %lf\n", dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input (Square Feet)     Output (Square Meter)
//-------------------------------------------------
//      5                       0.464500
//      7                       0.650300
//-------------------------------------------------
///////////////////////////////////////////////////