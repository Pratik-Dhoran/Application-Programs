// Problem Statement : Accept Number from user and calculate its CUBE

/*
    Algorithm
           1)START
           2)accept the number into variable iValue
           3)calculate Cube using No*No*No
           4)Display the Cube
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :  CalculateCube
//  Description : Calculate Cube of Number
//  Input : Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 31-01-2024
//
/////////////////////////////////////////////////////////////////////////

int CalculateCube(int iNo)
{
    long int iCube = 0 ;

    iCube = iNo*iNo*iNo ;

    return iCube ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculate Cube of Number
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;
    auto int iAns = 0 ;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iAns = CalculateCube(iValue);

    printf("The Cube of %d is : %d",iValue,iAns);

    return 0 ;
}
