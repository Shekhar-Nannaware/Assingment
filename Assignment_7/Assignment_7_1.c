
/////////////////////////////////////////////////////
//
//  1. Write a program which accepts number from user
//     and print that number of $ & * on Screen
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Prints that number of $ & * on Screen
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints that number of $ & * on Screen
//
///////////////////////////////////////////////////

void Display(
                int iNo
            )
{
    int iCnt = 0;

    if (iNo < 0)
    {
       iNo = -iNo;
    }

    for ( iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        printf("$\t*\t");
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
//      5           $ * $ * $ * $ *
//      3           $ * $ * 
//     -4           $ * $ * $ *
//      1           $ *
//      0           No output
//-------------------------------------------------
///////////////////////////////////////////////////
