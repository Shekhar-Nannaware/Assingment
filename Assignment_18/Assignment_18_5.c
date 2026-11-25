///////////////////////////////////////////////////
//
//  Program to Display Hollow Border Number and Star Grid Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints column numbers along the outer border
//                      (first/last row or column) and '*' inside the grid
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints border column numbers and interior '*' grid
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
            if (iCnt1 == 1 || iCnt1 == iRow || iCnt2 == 1 || iCnt2 == iCol)
            {
                printf("%d\t", iCnt2);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
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

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input : iRow = 4, iCol = 4
//      Output :
//      1       2       3       4
//
//      1       *       *       4
//
//      1       *       *       4
//
//      1       2       3       4
//
//      Input : iRow = 6, iCol = 5
//      Output :
//      1       2       3       4       5
//
//      1       *       *       *       5
//
//      1       *       *       *       5
//
//      1       *       *       *       5
//
//      1       *       *       *       5
//
//      1       2       3       4       5
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////