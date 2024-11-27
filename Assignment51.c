#include<stdio.h>
#define PI 3.14  

double CircleArea (float Radius)
{
    double dArea ;

    dArea = PI * Radius * Radius ;

    return dArea ;
}

int main ()
{
    float fvalue = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter Radius : ");
    scanf("%f",&fvalue);

    dRet = CircleArea(fvalue);

    printf("The Area is : %lf " ,dRet);

    return 0; 
}