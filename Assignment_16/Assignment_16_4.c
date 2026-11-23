///////////////////////////////////////////////////
//
//  Program to Display Descending Row Number Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints row numbers in descending order starting
//                      from iRow down to 1 across each row
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints descending row numbers for given rows & columns
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNo = 0;

    iNo = iRow;

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++, iNo--)
    {
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%d \t", iNo);
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
//      Input : iRow = 4, iCol = 4
//      Output :
//      4       4       4       4
//      3       3       3       3
//      2       2       2       2
//      1       1       1       1
//
//      Input : iRow = 3, iCol = 5
//      Output :
//      3       3       3       3       3
//      2       2       2       2       2
//      1       1       1       1       1
//
//      Input : iRow = 0, iCol = 4
//      Output :
//      (No output)
//-------------------------------------------------
///////////////////////////////////////////////////