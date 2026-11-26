/*
        Accept number of rows and number of columns from user and display below
        Pattern.

        Input :   iRow = 4      iCol = 4

        Output:   *   *   *   #

                  *   *   #   *

                  *   #   *   *

                  #   *   *   *
*/

// #include <stdio.h>
// #include <stdlib.h>

// void Pattern(int iRow, int iCol)
// {
// }
// int main()
// {
//     int iValue1 = 0, iValue2 = 0;

//     printf("Enter Number of rows and Columns :");
//     scanf("%d %d", iValue1, iValue2);

//     Pattern(iValue1, iValue2);

//     return EXIT_SUCCESS;
// }





///////////////////////////////////////////////////
//
//  Program to Display Hollow Box with Main Diagonal Star Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints '*' along the outer border and main diagonal
//                      (iCnt1 == iCnt2), with '-' in the first column from
//                      row 2 onward
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints hollow box with main diagonal '*' pattern
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
            if (iCnt1 == 1 || iCnt1 == iRow || iCnt2 == 1 || iCnt2 == iCol || iCnt1 == iCnt2)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
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
//      Input : iRow = 6, iCol = 6
//      Output :
//      *       *       *       *       *       *
//      *       *                               *
//      *               *                       *
//      *                       *               *
//      *                               *       *
//      *       *       *       *       *       *
//
//      Input : iRow = 4, iCol = 4
//      Output :
//      *       *       *       *
//      -       *               *
//      -               *       *
//      -       *       *       *
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////
