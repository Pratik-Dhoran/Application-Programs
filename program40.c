//Problem statement : accept two number from user and check 
//                    whether the second number is factor of first

/*
   Alorithm
           1)START
           2)accept the 2 numbers in iValue1 and iValue2 
           3) Divide No1 by No2 if remainder is 0 
           4)Display that it is factor
           4)END
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description : Checks No2 is factor of No1 
//  Input : Integer , Integer
//  Output : Boolean
//  Author : Pratik Purushottam Dhoran
//  Date : 04-02-2024
//
/////////////////////////////////////////////////////////////////////////

bool CheckFactor(int iNo1 , int iNo2)
{
    if((iNo1%iNo2)==0)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Checks the factor
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto bool bRet = false ; // variable to store return value
    auto int iValue1 =0 ; // variable to store first input
    auto int iValue2 = 0 ; // variable to store second input

    printf("Enter the First Number :");
    scanf("%d" , &iValue1);

    printf("Enter the Second Number :");
    scanf("%d" , &iValue2);

    bRet = CheckFactor(iValue1 , iValue2);

    if(bRet == true)
    {
        printf("%d is a Factor of %d",iValue2,iValue1);
    }
    else
    {
         printf("%d is Not a Factor of %d",iValue2,iValue1);
    }

    return 0 ;
}