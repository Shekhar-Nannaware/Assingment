
/*
    5] Write a program which accept number from user and display its table
       in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   TableRev
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Displays multiplication table in reverse order
//  Date            :   30/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

void TableRev(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 10;

    while (iCnt >= 1)
    {
        printf("%d\t", iNo * iCnt);

        iCnt--;
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
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           50  45  40  35  30  25  20  15  10  5
//      3           30  27  24  21  18  15  12  9   6   3
//      2           20  18  16  14  12  10  8   6   4   2
//      0           0   0   0   0   0   0   0   0   0   0
//      -5          50  45  40  35  30  25  20  15  10  5
//-------------------------------------------------
///////////////////////////////////////////////////
