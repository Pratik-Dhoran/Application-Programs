// problem statement :  Take a Number from user and check whether the 
//                      number is Pallindrome or Not  

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPallindrome
//  Description : Check whether a number is Pallindrome  or Not
//  Input : Integer
//  Output : Boolean
//  Author : Pratik Dhoran
//  Date : 12-02-2-24
//
//////////////////////////////////////////////////////////////////////////

bool CheckPallindrome(int iNo)
{
    auto int iCopy = iNo ;
    auto int iDigit = 0 ; 
    auto int iRev  = 0 ;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10 ;
        iRev = iRev *10 + iDigit ;
    }

     return(iRev == iCopy);
  
}

//////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of a Application which checks whether a Number
//  is pallindrome or Not
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;
    auto bool bRet = false ;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
      printf("%d is Pallindrome Number" , iValue);
    }
    else
    {
      printf("%d is Not a Pallindrome Number " , iValue);
    }

    return 0 ;
}