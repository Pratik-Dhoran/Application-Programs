// Problem Statement : Accept 3 Numbers from user and Find the Minimum 
               

/*
   Alorithm
           1)START
           2)accept the Numbers in iValue1 , iValue2 and iValue3
           3)Compare the 3 numbers 
           4)Display The Minimum
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description : Gives the Smallest Number
//  Input : Integer , Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////

int Minimum(int iNo1 , int iNo2, int iNo3)
{   
    if((iNo1<=iNo2) && (iNo1<=iNo3))
    {
        return iNo1 ;
    }
    else if((iNo2<=iNo1) && (iNo2<=iNo3))
    {
        return iNo2 ;
    }
    else
    {
        return iNo3 ;
    }
}
/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Gives Minimum among 3 
//  Numbers
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0 ;
    auto int iValue2 = 0 ;
    auto int iValue3 = 0 ;
    auto int iRet = 0 ;

    printf("Enter the First Number :");
    scanf("%d",&iValue1);
    
    printf("Enter the Second Number :");
    scanf("%d",&iValue2);

    printf("Enter the Third Number :");
    scanf("%d",&iValue3);

    iRet = Minimum(iValue1,iValue2,iValue3);

    printf("The Smallest Number is : %d",iRet);

    return 0 ;
}