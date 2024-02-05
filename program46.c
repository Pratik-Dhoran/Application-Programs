//problem statement :  take a number from user and 
//                     Check Whether it is Prime number or not

// TIME COMPLIXCITY : O(N/2)
// Using Updater (convert negative input as positive number)

/*
   Alorithm
           1)START
           2)accept the  number in iValue
           3) Divide it from 1 to itself 
           4)if in any case remainder is 0 then return true 
           6) else return false
           7) if return value is true ,Display it is prime number
           8) else it is not Prime number
           9)END
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description : checks whether a number is Prime or not  
//  Input : Integer 
//  Output : Boolean
//  Author : Pratik Purushottam Dhoran
//  Date : 05-02-2024
//
/////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    auto int iCnt  = 0 ;   // variable to store loop Counter 

    if(iNo< 0)
    {
        iNo = -iNo ;
    }

    for(iCnt = 2 ; iCnt < (iNo/2) ; iCnt++)
    {
        if((iNo%iCnt) ==0)
        {
            return false ;
        }
    }
    return true ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which checks whether a Number 
//  is Prime Number or Not
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;  // variable to store input value
    auto bool bRet = false  ;  // variable to store return value
 
    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true )
    {
        printf("%d is a Prime Number . ", iValue);
    }
    else
    {
        printf("%d is Not a prime Number .",iValue);
    }

}