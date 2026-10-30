
// ///////////////////////////////////////////////////
//
//  1. Write a program which accepts number from user
//     and print it's Number Line.
//
//  Output : -4  -3  -2  -1  0  1  2  3  4
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Prints Number Line
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints Number Line
//
///////////////////////////////////////////////////

void Display(
                int iNo
            )
{
    int iCnt = 0;
    int iNum = 0;

    iNum = -iNo;

    for ( iCnt = iNum; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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

    Display(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      4           -4 -3 -2 -1 0 1 2 3 4
//      3           -3 -2 -1 0 1 2 3
//      1           -1 0 1
//      0           0
//-------------------------------------------------
///////////////////////////////////////////////////
