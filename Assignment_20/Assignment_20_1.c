///////////////////////////////////////////////////
//
//  Program to Display Anti-Diagonal Hash Pattern
//
//  Function Name   :   DisplayPattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints '#' along the anti-diagonal while
//                      printing '*' in all other positions
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   DisplayPattern
//  Description     :   Prints '*' grid with '#' on the anti-diagonal
//
///////////////////////////////////////////////////

void DisplayPattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("Please enter positive values for rows and columns.\n");
        return;
    }

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if ((iCnt1 + iCnt2) == (iCol + 1))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
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

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    DisplayPattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input : iRow = 4, iCol = 4
//      Output :
//      *       *       *       #
//      *       *       #       *
//      *       #       *       *
//      #       *       *       *
//
//      Input : iRow = 3, iCol = 4
//      Output :
//      *       *       *       #
//      *       *       #       *
//      *       #       *       *
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////