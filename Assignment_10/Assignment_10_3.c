///////////////////////////////////////////////////
//
//  3. Program to Convert Kilometer into Meter
//
//  Function Name   :   DistanceCalcute
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Converts distance from kilometer into meter
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define KM_TO_METER 1000

///////////////////////////////////////////////////
//
//  Function Name   :   DistanceCalcute
//  Description     :   Converts kilometer into meter
//
///////////////////////////////////////////////////

int DistanceCalcute(
                        int iNo    // Distance in kilometer
                    )
{
    int iAns = 0;

    iAns = iNo * KM_TO_METER;    // Business Logic

    return iAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iKm = 0, iRet = 0;

    printf("Enter Kilometer : ");
    scanf("%d", &iKm);

    iRet = DistanceCalcute(iKm);

    printf("Distance in Meter is %d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           5000
//      12          12000
//-------------------------------------------------
///////////////////////////////////////////////////