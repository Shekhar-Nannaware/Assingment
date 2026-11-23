///////////////////////////////////////////////////
//
//  Program to Display Row-wise Alphabetical Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and displays the alphabetical grid pattern
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints pattern for given number of rows and columns
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char Ch = '\0';

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        Ch = 'A';
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++, Ch++)
        {
            printf("%c \t", Ch);
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
//      Function Call       Output
//-------------------------------------------------
//      Pattern(4, 4)       A B C D (4 rows in current logic)
//      Pattern(3, 4)       A B C D (3 rows in current logic)
//      Pattern(0, 4)       (No output)
//-------------------------------------------------
///////////////////////////////////////////////////