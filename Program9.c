// Problem Statement : Accept radius from user and calculate the area of circle
// For more accurate Answer

/*   Algorithm
     1) START
     2) Accept the Radius Into variable RADIUS
     3) create variable PI and store Value 3.14
     4) Calculate the area using PI*RADIUS*RADIUS
     5) Display the Area 
     6) END
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Area
//  Description : Calculate area of Circle
//  Input : Float
//  Output : Float
//  Author : Pratik Purushottam Dhoran
//  Date : 28-01-2024
//
/////////////////////////////////////////////////////////////////////////

#define PI 3.14

double CalculateArea(double dValue)
{    
    auto double dAns = 0.0 ;
    dAns = PI*dValue*dValue ;
    return dAns ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculate Area of Circle
//
/////////////////////////////////////////////////////////////////////////


int main()
{
    auto double dRADIUS = 0;
    auto double dArea = 0.0 ;

    printf("Enter the Radius :");
    scanf("%lf",&dRADIUS);

    dArea = CalculateArea(dRADIUS);

    printf("The Area of circle is : %lf",dArea);

    return 0 ;
}