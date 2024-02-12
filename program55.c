// problem statement : Accept number from user and reverse the number 

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description : Reverse the Number 
//  Input : Integer
//  Output : Integer 
//  Author : Pratik Dhoran
//  Date : 12-02-2-24
//
//////////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
   auto int iDigit = 0 ;
   auto int iRev = 0 ; 

   while(iNo != 0 )
   {
     iDigit = iNo % 10 ;
     iNo = iNo / 10 ;
     iRev = (iRev * 10) + iDigit ;
   }

   return iRev ;
}
//////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of a Application which reverse the Number 
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;
    auto int iRet = 0 ;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("The Reverse Number is : %d",iRet);

    return 0 ;
}