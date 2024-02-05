//problem statement :  take a number from user and 
//                     Check Whether it is perfect number or not

// TIME COMPLIXCITY : O(N/2)

/*
   Alorithm
           1)START
           2)accept the  number in iValue
           3) Divide it from 1 to itself 
           4)if remainder is 0 then then add them
           6)if Sum is equal to number itself
           7) Display it is perfect number
           8) else it is not perfect number
           9) END
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description : checks whether a number is perfect or not  
//  Input : Integer 
//  Output : Boolean
//  Author : Pratik Purushottam Dhoran
//  Date : 05-02-2024
//
/////////////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
{
    auto int iCnt = 0 ;  // variable to store loop counter
    auto int iSum = 0 ;  // variable to store Sum
    
    for(iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++ )
    {
        if((iNo%iCnt) ==0)
        {
            iSum = iSum+iCnt ;
        }
    }

    if(iNo == iSum)
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
//  Entry Point Function of a Application which checks whether a Number 
//  is Perfect Number or Not
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;  // variable to store input value
    auto bool bRet = 0 ;   //variable to store return value 

    printf("Enter the Number  : ");
    scanf("%d",&iValue) ;

    bRet =  CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a Perfect Number .\n",iValue);
    }
    else
    {
        printf("%d is NOT a Perfect Number .\n",iValue);
    }
    return 0 ;
}