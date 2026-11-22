
////////////////////////////////////////////////////////////////////////////////
//
//  1. Write a program which accept number from user and display All its
//     non Factors.
//
//  Input :     12
//  Output :    5   7   8   9   10   11
//
//  Input :     13
//  Output :    2   3   4   5   6   7   8   9   10   11   12
//
//  Input :     10
//  Output :    3   4   6   7   8   9
//
//  Function Name : NonFact
//  Input         : Integer
//  Output        : Prints non factors
//  Description   : This function displays all non factors of the given
//                  number.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Input         : Integer
//  Output        : Prints non factors
//  Description   : This function displays all non factors of the given
//                  number.
//
////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0, iFact = 0;

    iCnt = 1;

    while(iCnt < iNo)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }

        iCnt++;
    }

    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 12
//  Output : 5  7  8  9  10  11
//
//  Test Case 2:
//  Input  : 13
//  Output : 2  3  4  5  6  7  8  9  10  11  12
//
//  Test Case 3:
//  Input  : 10
//  Output : 3  4  6  7  8  9
//
////////////////////////////////////////////////////////////////////////////////
