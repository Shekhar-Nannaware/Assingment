
///////////////////////////////////////////////////
//
//  Program to Count Digits Less Than 6
//
//  Function Name   :   Count
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Counts digits less than 6
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Count
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Counts digits less than 6
//
///////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iCount = iCount + 1;
        }

        iNo = iNo / 10;
    }

    return iCount;
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

    iRet = Count(iValue);

    printf("%d \n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Function Call       Output
//-------------------------------------------------
//      Count(2395)         3
//
//      Count(1018)         3
//
//      Count(9440)         3
//
//      Count(96672)        1
//-------------------------------------------------
///////////////////////////////////////////////////
