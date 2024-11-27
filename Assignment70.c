#include<stdio.h>

int CountDiff(int iNo)
{    
    int iCount = 0 ;
    int iCount1 = 0 ;
    int iCount2 = 0 ;
    int iDigit =0 ;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
         
         if ((iDigit%2)==0)
         {
            iCount1 = iCount1 + iDigit ;
         }
         else 
         {
            iCount2 = iCount2 + iDigit ;
         } 
         iNo = iNo / 10 ;
    }
    iCount =  iCount1 - iCount2 ;
    return iCount ;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0 ; 
}