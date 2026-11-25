///////////////////////////////////////////////////
//
//  Program to Display Alternating Positive and Negative Number Rows
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints positive column numbers (1, 2, 3...)
//                      on odd rows and negative numbers (-1, -2, -3...)
//                      on even rows
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints alternating positive and negative number rows
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
            if (iCnt1 % 2 != 0)
            {
                printf("%d\t", iCnt2);
            }
            else
            {
                printf("%d\t", -iCnt2);
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
//      1       2       3       4       5
//     -1      -2      -3      -4      -5
//      1       2       3       4       5
//     -1      -2      -3      -4      -5
//      1       2       3       4       5
//
//      Input : iRow = 2, iCol = 3
//      Output :
//      1       2       3
//      -1      -2      -3
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      Please enter positive values for rows and columns.
//-------------------------------------------------
///////////////////////////////////////////////////