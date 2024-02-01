// Problem Statement : Accept Number from user and calculate its SQUARE

/*
    Algorithm
           1)START
           2)accept the number into variable iValue
           3)calculate Square using iNo*iNo
           4)Display the Square
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :  CalculateSquare
//  Description : Calculate Square of Number
//  Input : Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 31-01-2024
//
/////////////////////////////////////////////////////////////////////////

int CalculateSquare(int iNo)
{
    int iSquare =0 ;

    iSquare = iNo*iNo ;

    return iSquare ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculate Square of Number
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;
    auto int iAns = 0 ;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iAns = CalculateSquare(iValue);

    printf("The Square of %d is : %d",iValue , iAns);

    return 0 ;
}
