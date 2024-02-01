// Problem Statement : Accept Number from user and check whether it is Even or Odd

/*
    Algorithm
           1)START
           2)accept the number into variable iValue
           3)Divide it by 2
           4)if remainder is 0 the Display even 
           5)else Display Odd
           6)END
*/

#include<stdio.h>
#include<stdbool.h>  //for Boolean Data type

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :  Even
//  Description : Check Even 
//  Input : Integer
//  Output : Boolean
//  Author : Pratik Purushottam Dhoran
//  Date : 31-01-2024
//
/////////////////////////////////////////////////////////////////////////

bool Even(int iNo)
{
    if((iNo%2)==0)
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
// Entry Point Function of a Application which Checks Number is Even or not
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;
    bool bRet = false ;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = EvenOdd(iValue);

    if(bRet == true )
    {
        printf("The Number is Even .\n");
    }
    else
    {
        printf("The Number is Odd .\n");
    }

    return 0 ;
}
