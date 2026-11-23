///////////////////////////////////////////////////
//
//  Program to Display Sequential Number Grid Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints consecutive incrementing numbers starting
//                      from 1 across the grid
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints sequential numbers for given rows & columns
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNo = 0;

    iNo = 1;
    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++, iNo++)
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
//      Function Call       Output
//-------------------------------------------------
//      Pattern(3, 4)       1 2 3 4; 5 6 7 8; 9 10 11 12
//      Pattern(2, 3)       1 2 3; 4 5 6
//      Pattern(0, 4)       (No output)
//-------------------------------------------------
///////////////////////////////////////////////////