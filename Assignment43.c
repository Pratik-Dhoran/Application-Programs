#include<stdio.h>

int Factorial(int iNo)
{
     int i ;
     int iMul = 1;
     
     if(iNo<0)
     {
      iNo  = -iNo ;
     }

    for(i=1 ;  i<=iNo ; i++)
    {
        iMul = (iMul*i) ;
    }
     return iMul;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is :  %d",iRet);

    return 0 ;
}