#include<stdio.h> 

double FhtoCs(double fTemp)
{
    double dTemp = 0 ; 

    dTemp = (fTemp-32)*5/9;

    return dTemp ;
}

int main ()
{
    float fvalue = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fvalue);

    dRet = FhtoCs(fvalue);

    printf("The temperature in calsius is : %lf" ,dRet);

    return 0; 
}