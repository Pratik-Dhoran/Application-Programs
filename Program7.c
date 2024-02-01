// Problem Statement : Accept radius from user and calculate the area of circle

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

float CalculateArea(float fValue)
{    
    auto const float PI = 3.14f ;
    auto float fAns = 0.0f ;
    fAns = PI*fValue*fValue ;
    return fAns ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculate Area of Circle
//
/////////////////////////////////////////////////////////////////////////


int main()
{
    auto float fRADIUS = 0;
    auto float fArea = 0.0f ;

    printf("Enter the Radius :");
    scanf("%f",&fRADIUS);

    fArea = CalculateArea(fRADIUS);

    printf("The Area of circle is : %f",fArea);

    return 0 ;
}