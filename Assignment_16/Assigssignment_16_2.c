///////////////////////////////////////////////////
//
//  Program to Display Alternating Case Alphabetical Pattern
//
//  Function Name   :   Pattern
//  Input           :   int (iRow), int (iCol)
//  Output          :   None
//  Description     :   Accepts number of rows and columns from user
//                      and prints uppercase alphabets on odd rows and
//                      lowercase alphabets on even rows
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Prints alternating uppercase and lowercase row patterns
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char chBg = '\0', chSl = '\0';

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        chBg = 'A';
        chSl = 'a';

        for (iCnt2 = 0; iCnt2 < iCol; iCnt2++, chBg++, chSl++)
        {
            if (iCnt1 % 2 != 0)
            {
                printf("%c\t", chBg);
            }
            else
            {
                printf("%c\t", chSl);
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Function Call       Output
//-------------------------------------------------
//      Pattern(4, 4)       Odd rows: A B C D; Even rows: a b c d
//      Pattern(3, 3)       Row 1: A B C; Row 2: a b c; Row 3: A B C
//      Pattern(0, 4)       (No output)
//-------------------------------------------------
///////////////////////////////////////////////////