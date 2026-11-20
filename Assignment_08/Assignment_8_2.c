
/*
    2] Accept Single Digit Number from user and print into Word.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Displays number into word
//  Date            :   30/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    switch (iNo)
    {
        case 1:
            printf("One \n");
            break;

        case 2:
            printf("Two \n");
            break;

        case 3:
            printf("Three \n");
            break;

        case 4:
            printf("Four \n");
            break;

        case 5:
            printf("Five \n");
            break;

        case 6:
            printf("Six \n");
            break;

        case 7:
            printf("Seven \n");
            break;

        case 8:
            printf("Eight \n");
            break;

        case 9:
            printf("Nine \n");
            break;

        default:
            printf("Invalid Input \n");
            break;
    }
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
//      1           One
//      2           Two
//      3           Three
//      4           Four
//      5           Five
//      6           Six
//      7           Seven
//      8           Eight
//      9           Nine
//      0           Invalid Input
//      10          Invalid Input
//-------------------------------------------------
///////////////////////////////////////////////////
