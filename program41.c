//problem statement :  take a number from user ans display its factor

/*
   Alorithm
           1)START
           2)accept the  number in iValue
           3) Divide it from 1 to itself 
           4)if remainder is 0 then display it
           4)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description : Displays factors of a number 
//  Input : Integer 
//  Output : void 
//  Author : Pratik Purushottam Dhoran
//  Date : 04-02-2024
//
/////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
   auto int iCnt =0 ;

   printf("Factor of %d are: \n" ,iNo);

   for(iCnt =1 ; iCnt<iNo ; iCnt++)
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
    auto int iValue =0 ;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0 ;
}
