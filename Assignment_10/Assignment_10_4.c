///////////////////////////////////////////////////
//
//  4. Program to Convert Fahrenheit into Celsius
//
//  Function Name   :   FhtoCs
//  Input           :   Float
//  Output          :   Double
//  Description     :   Converts temperature from Fahrenheit into Celsius
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define FAHRENHEIT_OFFSET 32

///////////////////////////////////////////////////
//
//  Function Name   :   FhtoCs
//  Description     :   Converts Fahrenheit into Celsius
//
///////////////////////////////////////////////////

double FhtoCs(
                float fTemp    // Temperature in Fahrenheit
             )
{
    double dAns = 0;

    dAns = (fTemp - FAHRENHEIT_OFFSET) * (5.0 / 9.0);    // Business Logic

    return dAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf\n", dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input (Fahrenheit)     Output (Celsius)
//-------------------------------------------------
//      10                     -12.2222
//      34                     1.11111
//-------------------------------------------------
///////////////////////////////////////////////////