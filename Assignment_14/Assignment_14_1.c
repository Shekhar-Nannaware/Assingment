
////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept number from user and display its
//     multiplication of Factor.
//
//  Input :     12
//  Output :    144     (1 * 2 * 3 * 4 * 6)
//
//  Input :     13
//  Output :    1       (1)
//
//  Input :     10
//  Output :    10      (1 * 2 * 5)
//
//  Function Name : MultFact
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the multiplication of all factors
//                  of the given number, excluding the number itself.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the multiplication of all factors
//                  of the given number.
//
////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0, iResult = 1, iFreq = 0;

    iFreq = iNo / 2;

    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iResult = iResult * iCnt;
        }
    }

    return iResult;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 12
//  Output : 144
//
//  Test Case 2:
//  Input  : 13
//  Output : 1
//
//  Test Case 3:
//  Input  : 10
//  Output : 10
//
////////////////////////////////////////////////////////////////////////////////
