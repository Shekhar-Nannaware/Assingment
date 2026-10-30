
/*
    1] Write a program which accept number from user and if number is
       less than 50 then print Small, if is greater than 50 print Medium,
       if is greater than 100 then print Large.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Checks number and prints its category
//  Date            :   30/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small \n");
    }
    else if (iNo < 100)
    {
        printf("Medium \n");
    }
    else
    {
        printf("Large \n");
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

    Number(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      25          Small
//      49          Small
//      50          Medium
//      75          Medium
//      99          Medium
//      100         Large
//      150         Large
//-------------------------------------------------
///////////////////////////////////////////////////
