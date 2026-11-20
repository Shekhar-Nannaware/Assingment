///////////////////////////////////////////////////
//
//  1. Program to Display Numbers in Reverse Order
//
//  Function Name   :   RengeDisplayRev
//  Input           :   Integer, Integer
//  Output          :   void
//  Description     :   Displays all numbers in reverse
//                      order within the given range
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   RengeDisplayRev
//  Description     :   Displays numbers in reverse order
//
///////////////////////////////////////////////////

void RengeDisplayRev(
                        int iStart,   // Starting point
                        int iEnd      // Ending point
                    )
{
    int i = 0;

    if (iStart < iEnd)
    {
        for (i = iEnd; i >= iStart; i--)
        {
            printf("%d \t", i);
        }

        printf("\n");
    }
    else
    {
        printf("Invalid Range \n");
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

    printf("Enter Starting Point : ");
    scanf("%d", &iValue2);

    RengeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input   :   23    35
//      Output  :   35    34    33    32    31    30    29    28    27    26    25    24    23
//
//      Input   :   10    18
//      Output  :   18    17    16    15    14    13    12    11    10
//
//      Input   :   10    10
//      Output  :   10
//
//      Input   :  -10     2
//      Output  :   2    1    0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -10
//
//      Input   :   90    18
//      Output  :   Invalid Ranges
//-------------------------------------------------
///////////////////////////////////////////////////