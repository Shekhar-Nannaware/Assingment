
// ///////////////////////////////////////////////////
//
//  4. Write a program which accepts N and print first 5
//     Multiples of N.
//
//  Function Name   :   MultipleDisplay
//  Input           :   Integer
//  Output          :   Nothing
//  Description     :   Prints first 5 Multiples of N
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay
//  Description     :   Prints first 5 Multiples of N
//
///////////////////////////////////////////////////

void MultipleDisplay(
                        int iNo
                    )
{
    int iCnt = 0, Ans = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        Ans = iCnt * iNo;
        printf("%d\t", Ans);
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

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           5  10  15  20  25
//      3           3  6  9  12  15
//      2           2  4  6  8  10
//     -4          -4 -8 -12 -16 -20
//      0           0  0  0  0  0
//-------------------------------------------------
///////////////////////////////////////////////////
