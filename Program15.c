// Problem Statement : Accept two Numbers from user and perform Multiplication

/*
   Alorithm
           1)START
           2)accept two numbers in iValue1 and iValue2
           3)Perform Multiplication
           4)Display Result
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiplication
//  Description : performs Multiplication of two Number
//  Input : Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////


int Multiplication(int iNo1, int iNo2)
{
        auto int iMul = 0 ;
        iMul = iNo1 * iNo2 ;
        return iMul ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which performs Multiplication
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

        iAns = Multiplication(iValue1,iValue2);

        printf("The Multiplication is : %d",iAns);

        return 0 ;
}