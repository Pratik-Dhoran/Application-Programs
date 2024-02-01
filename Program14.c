// Problem Statement : Accept two Numbers from user and perform Substraction

/*
   Alorithm
           1)START
           2)accept two numbers in iValue1 and iValue2
           3)Perform Substraction
           4)Display Result
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Substraction
//  Description : performs Substraction of two Number
//  Input : Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////


int Substraction(int iNo1, int iNo2)
{
        auto int iSub = 0 ;
        iSub = iNo1 - iNo2 ;
        return iSub ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which performs Substraction
//
/////////////////////////////////////////////////////////////////////////

int main()
{
        auto int iValue1 = 0 ;
        auto int iValue2 = 0 ;
        auto int iAns = 0 ;

        printf("Enter the First Number : ");
        scanf("%d",&iValue1);

        printf("Enter the second Number : ");
        scanf("%d",&iValue2);

        iAns = Substraction(iValue1,iValue2);

        printf("The Substraction is : %d",iAns);

        return 0 ;
}