#include<stdio.h> 

double SquareMeter (float iValue)
{
    double meter = 0 ; 

    meter = iValue*0.0929 ;

    return meter ;
}

int main ()
{
    int ivalue = 0 ;
    double dRet = 0.0 ;

    printf("Enter Distance : ");
    scanf("%d",&ivalue);

    dRet = SquareMeter(ivalue);

    printf("The Distance in meter is : %lf ",dRet);

    return 0; 
}