
// ///////////////////////////////////////////////////
//
//  1. Write a program which accepts number from user
//     and print Till That Number.
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Prints numbers from 1 till given number
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints numbers till given number
//
///////////////////////////////////////////////////

void Display(
                int iNo
            )
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
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
//      5           1  2  3  4  5
//      3           1  2  3
//      1           1
//      0           No output
//     -5           No output
//-------------------------------------------------
///////////////////////////////////////////////////
