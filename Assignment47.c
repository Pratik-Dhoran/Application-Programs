#include<stdio.h>

int DollarToINR(int iNo)
{
   int iINR ;
    
    iINR = 70 * iNo ;

    return iINR ;
}

int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0 ;
}