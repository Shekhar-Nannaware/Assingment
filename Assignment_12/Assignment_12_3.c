
///////////////////////////////////////////////////
//
//  Program to Count Frequency of 2 in a Number
//
//  Function Name   :   CountTwo
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Counts frequency of digit 2
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CountTwo
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Counts frequency of digit 2
//
///////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 2)
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
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

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
//      CountTwo(2395)      0
//
//      CountTwo(1018)      0
//
//      CountTwo(9000)      0
//
//      CountTwo(922432)    2
//-------------------------------------------------
///////////////////////////////////////////////////
