/*
    Accept Amount in US dollar and return its corresponding value
    in Indian Currency.
    Consider 1$ as 70 rupees.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   DollarToNIR
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Converts US Dollar into Indian Rupees
//  Date            :   04/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

int DollarToNIR(int iNo)
{
    int iRup = 0;

    if (iNo < 0)
    {
        printf("Invalid \n");
    }
    else
    {
        iRup = iNo * 70;
    }

    return iRup;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToNIR(iValue);

    printf("%d \n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           350
//      10          700
//      100         7000
//      0           0
//      -5          Invalid (then 0)
//-------------------------------------------------
///////////////////////////////////////////////////