//problem statement :  take a number from user and display its factor

// TIME COMPLIXCITY : O(N/2)

/*
   Alorithm
           1)START
           2)accept the  number in iValue
           3) Divide it from 1 to itself 
           4)if remainder is 0 then display it
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description : Displays factors of a number 
//  Input : Integer 
//  Output : void 
//  Author : Pratik Purushottam Dhoran
//  Date : 05-02-2024
//
/////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
   auto int iCnt =0 ; // variable to store loop counter

   printf("Factor of %d are: \n" ,iNo);

   for(iCnt =1 ; iCnt<=(iNo/2) ; iCnt++)
   {
      
      if((iNo%iCnt)==0)
      {
        printf("%d \n",iCnt);
      }
   }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Displays factors of a number
//
/////////////////////////////////////////////////////////////////////////

int main ()
{
    auto int iValue =0 ;  //variable to store Input

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0 ;
}
