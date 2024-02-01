// Problem Statement : Accept two Numbers from user and perform Division

/*
   Alorithm
           1)START
           2)accept two numbers in iValue1 and iValue2
           3)Perform Division
           4)Display Result
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Division
//  Description : performs Division of two Number
//  Input : Integer , Integer
//  Output : Float
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////


float Division(int iNo1, int iNo2)
{
        auto float fDiv = 0 ;
        fDiv = ((float)iNo1 /(float) iNo2) ;
        return fDiv ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which performs Division
//
/////////////////////////////////////////////////////////////////////////

int main()
{
        auto int iValue1 = 0 ;
        auto int iValue2 = 0 ;
        auto float fAns = 0 ;

        printf("Enter the Greater Number  : ");
        scanf("%d",&iValue1);

        printf("Enter the Lesser Number : ");
        scanf("%d",&iValue2);

        fAns = Division(iValue1,iValue2);

        printf("The Division is : %f",fAns);

        return 0 ;
}