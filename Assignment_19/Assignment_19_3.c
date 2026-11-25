///////////////////////////////////////////////////
//
//  Program to Display Diagonal Split Grid Pattern ($, *, #)
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints '$' along the main diagonal (iCnt1 == iCnt2),
//                      '*' above the diagonal (iCnt1 < iCnt2), and
//                      '#' below the diagonal (iCnt1 > iCnt2)
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints '$', '*', and '#' split across main diagonal
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
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
            if (iCnt1 == iCnt2)
            {
                printf("$\t");
            }
            else if (iCnt1 < iCnt2)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input : iRow = 5, iCol = 5
//      Output :
//      $       *       *       *       *
//      #       $       *       *       *
//      #       #       $       *       *
//      #       #       #       $       *
//      #       #       #       #       $
//
//      Input : iRow = 4, iCol = 4
//      Output :
//      $       *       *       *
//      #       $       *       *
//      #       #       $       *
//      #       #       #       $
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////