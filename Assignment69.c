#include<stdio.h>

int MulDigits(int iNo)
{    
    int iCount = 1 ;
    int iDigit =0 ;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
         
         iCount = iCount * iDigit ;

         iNo = iNo / 10 ;
    }
    return iCount ;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);

    return 0 ; 
}