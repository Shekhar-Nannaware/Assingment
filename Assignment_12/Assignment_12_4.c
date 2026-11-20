/*
      Write a program which Accept Number from user and count frequency of 4 in it.

      Input :   2395
      Optput:   1

      Input :   1018
      Optput:   0

      Input :   9000
      Optput:   0

      Input :   922432
      Optput:   3
*/

#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4)
        {
            iCount = iCount + 1;
        }

        iNo = iNo / 10;
    }

    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d \n", iRet);

    return 0;
}