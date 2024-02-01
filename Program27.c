// Problem Statement : Accept 2 numbers from user and display Maximum

/*
   Alorithm
           1)START
           2)accept the Numbers in iValue1 and iValue2 
           3)Compare iValue1 and iValue2
           4)Display Minimum Number
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description : Gives the Smallest Number
//  Input : Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////

int Minimum(int iNo1 , int iNo2)
{
    if(iNo1<iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2 ;
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Gives Minimum among two 
//  Numbers
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0 ;
    auto int iValue2 = 0 ;
    auto int iRet = 0 ;

    printf("Enter the First Number :");
    scanf("%d",&iValue1);
    
    printf("Enter the Second Number :");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1,iValue2);

    printf("The Smallest Number is : %d",iRet);

    return 0 ;
}