///////////////////////////////////////////////////
//
//  Program to Display Anti-Diagonal Star and Hash Grid Pattern
//
//  Function Name   :   Display
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts equal number of rows and columns from user
//                      and prints '*' on and above the anti-diagonal
//                      (i + j <= iCol + 1) and '#' below it
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints anti-diagonal '*' and '#' grid for given rows & columns
//
///////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("Invalid input: Please enter positive values for rows and columns.\n");
        return;
    }

    if (iRow != iCol)
    {
        printf("Invalid input: Please enter equal rows and columns.\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i == 1) || ((i + j) <= (iCol + 1)))
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf(" \n \n");
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

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input : iRow = 4, iCol = 4
//      Output :
//      *       *       *       *
//
//      *       *       *       #
//
//      *       *       #       #
//
//      *       #       #       #
//
//      Input : iRow = 3, iCol = 4
//      Output :
//      Invalid input: Please enter equal rows and columns.
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Invalid input: Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////