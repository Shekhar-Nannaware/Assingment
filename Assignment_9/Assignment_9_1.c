/*
    1] Write a program which accept number from user and display
       first N stars and then N hashes.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Displays N stars and N hashes
//  Date            :   04/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 0;

    for (i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }

    for (i = 1; i <= iNo; i++)
    {
        printf("#\t");
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
//      5           * * * * * # # # # #
//      3           * * * # # #
//      2           * * # #
//      0           (No output)
//      -5          * * * * * # # # # #
//-------------------------------------------------
///////////////////////////////////////////////////