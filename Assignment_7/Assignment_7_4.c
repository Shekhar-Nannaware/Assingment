
// ///////////////////////////////////////////////////
//
//  4. Write a program which accepts N from user and
//     print all odd Numbers up to N.
//
//  Function Name   :   OddDisplay
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Prints all odd Numbers up to N
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Description     :   Prints all odd Numbers up to N
//
///////////////////////////////////////////////////

void OddDisplay(
                    int iNo
                )
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
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

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      10          1  3  5  7  9
//      7           1  3  5
//      5           1  3
//      1           No output
//      0           No output
//     -5           No output
//-------------------------------------------------
///////////////////////////////////////////////////
