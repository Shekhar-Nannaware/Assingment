///////////////////////////////////////////////////
//
//  1. Program to Display Even Numbers in Given Range
//
//  Function Name   :   RangeDisplay
//  Input           :   Integer, Integer
//  Output          :   void
//  Description     :   Displays all even numbers in
//                      the given range
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplay
//  Description     :   Displays even numbers in range
//
///////////////////////////////////////////////////

void RangeDisplay(
                    int iStart,   // Starting point
                    int iEnd      // Ending point
                 )
{
    int i = 0;

    if (iStart <= iEnd)
    {
        for (i = iStart; i <= iEnd; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d \t", i);
            }
        }

        printf("\n");
    }
    else
    {
        printf("Invalid Range\n");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter ending Point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input   :   23    35
//      Output  :   24    26    28    30    32    34
//
//      Input   :   10    18
//      Output  :   10    12    14    16    18
//
//      Input   :   10    10
//      Output  :   10
//
//      Input   :  -10     2
//      Output  :  -10    -8    -6    -4
//
//      Input   :   90    18
//      Output  :   Invalid Range
//-------------------------------------------------
///////////////////////////////////////////////////