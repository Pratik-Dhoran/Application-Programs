#include<stdio.h> 

int KmtoMeter (int iNo)
{
    int meter = 0 ; 

    meter = iNo*1000 ;

    return meter ;
}

int main ()
{
    int ivalue = 0 ;
    int iRet = 0 ;

    printf("Enter Distance : ");
    scanf("%d",&ivalue);

    iRet = KmtoMeter(ivalue);

    printf("The Distance in meter is : %d " ,iRet);

    return 0; 
}