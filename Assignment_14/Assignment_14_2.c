
////////////////////////////////////////////////////////////////////////////////
//
//  1. Write a program which accept number from user and display its Factor
//     in decreasing order.
//
//  Input :     12
//  Output :    6   4   3   2   1
//
//  Input :     13
//  Output :    1       (1)
//
//  Input :     10
//  Output :    5   2   1
//
//  Function Name : FactRev
//  Input         : Integer
//  Output        : Prints factors in decreasing order
//  Description   : This function displays all factors of the given number
//                  in decreasing order.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Input         : Integer
//  Output        : Prints factors in decreasing order
//  Description   : This function displays all factors of the given number
//                  in decreasing order.
//
////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0, iFreq = 0;

    iFreq = iNo / 2;

    iCnt = iFreq;

    while(iCnt > 0)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }

        iCnt--;
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 12
//  Output : 6  4  3  2  1
//
//  Test Case 2:
//  Input  : 13
//  Output : 1
//
//  Test Case 3:
//  Input  : 10
//  Output : 5  2  1
//
////////////////////////////////////////////////////////////////////////////////
