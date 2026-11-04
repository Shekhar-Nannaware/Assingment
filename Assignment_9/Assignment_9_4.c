/*
    Write a program to find Odd factorial of given number.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Calculates odd factorial of given number
//  Date            :   04/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iResult = 1;

    while (iNo != 0)
    {
        if ((iNo % 2) != 0)
        {
            iResult = iResult * iNo;
        }

        iNo--;
    }

    return iResult;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           15      (5 * 3 * 1)
//      6           15      (5 * 3 * 1)
//      4           3       (3 * 1)
//      3           3       (3 * 1)
//      2           1       (1)
//      1           1
//      0           1
//-------------------------------------------------
///////////////////////////////////////////////////