
////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts three numbers from user and prints
//     the multiplication of the numbers. If any one number is zero,
//     then multiply the remaining two numbers.
//
//  Input  : 5  4  7
//  Output : 140
//
//  Input  : 5  0  7
//  Output : 35
//
//  Input  : 0  0  0
//  Output : 0
//
//  Function Name : Multiply
//  Input         : Three Integers
//  Output        : Integer
//  Description   : This function calculates the multiplication of three
//                  numbers by ignoring one zero value.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Input         : Three Integers
//  Output        : Integer
//  Description   : Calculates multiplication by ignoring one zero value.
//
////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    if(iNo1 == 0)
    {
        iAns = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iAns = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iAns = iNo1 * iNo2;
    }
    else
    {
        iAns = iNo1 * iNo2 * iNo3;
    }

    return iAns;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please Enter Three Numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 5  4  7
//  Output : 140
//
//  Test Case 2:
//  Input  : 5  0  7
//  Output : 35
//
//  Test Case 3:
//  Input  : 0  0  0
//  Output : 0
//
////////////////////////////////////////////////////////////////////////////////
