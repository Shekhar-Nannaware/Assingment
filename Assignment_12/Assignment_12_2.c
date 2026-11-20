
///////////////////////////////////////////////////
//
//  Program to Check Whether Number Contains Zero
//
//  Function Name   :   ChZero
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether number contains zero
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////
//
//  Function Name   :   ChZero
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether number contains zero
//
///////////////////////////////////////////////////

BOOL ChZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            iNo = iNo / 10;
        }
    }

    return FALSE;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero \n");
    }
    else
    {
        printf("There is no Zero \n");
    }

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Function Call       Output
//-------------------------------------------------
//      ChZero(2395)        There is no Zero
//
//      ChZero(1018)        It Contains Zero
//
//      ChZero(9000)        It Contains Zero
//
//      ChZero(10678)       It Contains Zero
//-------------------------------------------------
///////////////////////////////////////////////////
