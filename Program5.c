// Problem Statement : Accept 2 values from user and perform the addition.
// Industrial Programming Conventions 

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description : Used to Perform Addition of Two Numbers 
//  Input : Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 28-01-2024
//
/////////////////////////////////////////////////////////////////////////

int Additon(int iNo1 , int iNo2)
{
    auto int iSum = 0 ;  // Variable to store Addition
    iSum = iNo1 + iNo2 ;
    return iSum ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point function of Application which performs addition of two 
//  Numbers
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0 ;  // Variable to store first input
    auto int iValue2 = 0 ;  // Variable to store second input
    auto int iAns = 0 ;     // Variable to store the result

    printf("Enter the first Number :");
    scanf("%d",&iValue1);

    printf("Enter the Second Number :");
    scanf("%d",&iValue2);

    iAns = Additon(iValue1, iValue2);

    printf("The Additon is : %d ", iAns);

    return 0 ;
}