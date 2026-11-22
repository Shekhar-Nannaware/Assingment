
////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts total marks and obtained marks from
//     user and calculates percentage.
//
//  Input  : 1000  745
//  Output : 74.5%
//
//  Function Name : Peracentage
//  Input         : Two Integers
//  Output        : Float
//  Description   : This function calculates percentage using total marks
//                  and obtained marks.
//
//  Date          : 22/11/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Peracentage
//  Input         : Two Integers
//  Output        : Float
//  Description   : Calculates percentage of obtained marks.
//
////////////////////////////////////////////////////////////////////////////////

float Peracentage(int iNo1, int iNo2)
{
    float iPercentage = 0;

    iPercentage = (float)iNo2 / (float)iNo1 * 100;

    return iPercentage;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total Marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained Marks : ");
    scanf("%d", &iValue2);

    fRet = Peracentage(iValue1, iValue2);

    printf("%.1f %%\n", fRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 1000  745
//  Output : 74.5%
//
//  Test Case 2:
//  Input  : 500  250
//  Output : 50.0%
//
//  Test Case 3:
//  Input  : 800  600
//  Output : 75.0%
//
////////////////////////////////////////////////////////////////////////////////
