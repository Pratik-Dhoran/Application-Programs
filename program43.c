//problem statement :  take a number from user and display Sum of its Factors

// TIME COMPLIXCITY : O(N/2)

/*
   Alorithm
           1)START
           2)accept the  number in iValue
           3) Divide it from 1 to itself 
           4)if remainder is 0 then then add them
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumFactor
//  Description : Add factors of a number 
//  Input : Integer 
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 05-02-2024
//
/////////////////////////////////////////////////////////////////////////

int SumFactors(int iNo)
{
   auto int iCnt = 0 ; //variable to store loop counter
   auto int iSum = 0 ;  //variable to store Sum

   for(iCnt = 1 ; iCnt<=(iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         iSum = iSum + iCnt ;
      }
   }  
   return iSum ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Displays Sum of 
//  factors of a number
//
/////////////////////////////////////////////////////////////////////////

int main()
{
   auto int iValue = 0 ;  //variable to store input
   auto int iRet = 0 ;    //variable to store return value

   printf("Enter the Number : ");
   scanf("%d",&iValue);

   iRet = SumFactors(iValue);

   printf("The Sum of Factors is :  %d",iRet);

   return 0 ;
 }