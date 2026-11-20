
///////////////////////////////////////////////////
//
//  Program to Display Digits in Reverse Order
//
//  Function Name   :   DisplayDigit
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays digits in reverse order
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays digits in reverse order
//
///////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d \n", iDigit);

        iNo = iNo / 10;
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

    printf("Enter Number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Function Call       Output
//-------------------------------------------------
//      DisplayDigit(2395)  5
//                          9
//                          3
//                          2
//
//      DisplayDigit(1018)  8
//                          1
//                          0
//                          1
//
//      DisplayDigit(-1018) 8
//                          1
//                          0
//                          1
//
//      DisplayDigit(9000)  0
//                          0
//                          0
//                          9
//-------------------------------------------------
///////////////////////////////////////////////////
