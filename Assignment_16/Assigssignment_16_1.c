///////////////////////////////////////////////////
//
//  Program to Display Alphabetical Grid Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints repeating uppercase alphabets (A, B, C...)
//                      across each row
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints alphabetical pattern for given rows & columns
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char Ch = '\0';

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        Ch = 'A';
        for (iCnt2 = 0; iCnt2 < iCol; iCnt2++, Ch++)
        {
            printf("%c\t", Ch);
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
//      Pattern(4, 4)       A B C D (4 rows)
//      Pattern(2, 3)       A B C (2 rows)
//      Pattern(0, 4)       (No output)
//-------------------------------------------------
///////////////////////////////////////////////////