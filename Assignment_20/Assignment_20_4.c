///////////////////////////////////////////////////
//
//  Program to Display Border and Anti-Diagonal Pattern with '#' and '$'
//
//  Function Name   :   DisplayPattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints '*' on the outer border and anti-diagonal,
//                      '#' above/left of the anti-diagonal, and '$' below/right
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   DisplayPattern
//  Description     :   Prints '*', '#', and '$' grid for given rows & columns
//
///////////////////////////////////////////////////

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("Please enter positive values for rows and columns.\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i == 1) || (i == iRow) ||
                (j == 1) || (j == iCol) ||
                ((i + j) == (iRow + 1)))
            {
                printf("*\t");
            }
            else if ((i + j) < (iRow + 1))
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
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
//      Input : iRow = 6, iCol = 6
//      Output :
//      *       *       *       *       *       *
//      *       #       #       #       *       *
//      *       #       #       *       $       *
//      *       #       *       $       $       *
//      *       *       $       $       $       *
//      *       *       *       *       *       *
//
//      Input : iRow = 4, iCol = 4
//      Output :
//      *       *       *       *
//      *       #       *       *
//      *       *       $       *
//      *       *       *       *
//
//      Input : iRow = 0, iCol = 6
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////