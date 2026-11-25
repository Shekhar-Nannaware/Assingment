///////////////////////////////////////////////////
//
//  Program to Display Wrapping Number Grid Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints incrementing numbers (1 to 9) across
//                      the grid, wrapping back to 1 after 9
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints wrapping number pattern (1-9) for given rows & columns
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNo = 0;

    iNo = 1;
    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for (iCnt2 = 0; iCnt2 < iCol; iCnt2++, iNo++)
        {
            if (iNo >= 10)
            {
                iNo = 1;
            }

            printf("%d\t", iNo);
        }
        printf("\n");
    }

    printf("\n");
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
//      Input : iRow = 4, iCol = 4
//      Output :
//      1       2       3       4
//      5       6       7       8
//      9       1       2       3
//      4       5       6       7
//
//      Input : iRow = 2, iCol = 3
//      Output :
//      1       2       3
//      4       5       6
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      (No output)
//-------------------------------------------------
///////////////////////////////////////////////////