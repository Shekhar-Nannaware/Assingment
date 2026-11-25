///////////////////////////////////////////////////
//
//  Program to Display Main Diagonal Dollar Grid Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints '$' along the main diagonal (iCnt1 == iCnt2)
//                      and '*' in all other positions
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints '$' on main diagonal and '*' elsewhere
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
            if (iCnt1 == iCnt2) // Diagonal
            {
                printf("$\t");
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
//      $       *       *       *
//
//      *       $       *       *
//
//      *       *       $       *
//
//      *       *       *       $
//
//      Input : iRow = 2, iCol = 3
//      Output :
//      $       *       *
//
//      *       $       *
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////