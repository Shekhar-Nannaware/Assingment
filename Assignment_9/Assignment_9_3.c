/*
    Write a program to find even factorial of given number.
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   EvenFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Calculates even factorial of given number
//  Date            :   04/11/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iResult = 1;

    while (iNo != 0)
    {
        if ((iNo % 2) == 0)
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

    iRet = EvenFactorial(iValue);

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
//      5           8       (4 * 2)
//      6           48      (6 * 4 * 2)
//      4           8       (4 * 2)
//      3           2       (2)
//      1           1
//      0           1
//-------------------------------------------------
///////////////////////////////////////////////////