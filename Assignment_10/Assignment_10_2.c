///////////////////////////////////////////////////
//
//  2. Program to Calculate Area of Rectangle
//
//  Function Name   :   RectArea
//  Input           :   Float, Float
//  Output          :   Double
//  Description     :   Calculates the area of rectangle
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   RectArea
//  Description     :   Calculates area of rectangle
//
///////////////////////////////////////////////////

double RectArea(
                    float fWidth,    // Width of rectangle
                    float fHeight    // Height of rectangle
                )
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;    // Business Logic

    return dArea;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f", &fValue1);

    printf("Enter Height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %.3f\n", dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Width       Height      Output
//-------------------------------------------------
//      5.3         9.78        51.834
//-------------------------------------------------
///////////////////////////////////////////////////