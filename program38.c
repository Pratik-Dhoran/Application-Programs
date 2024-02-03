//Problem statement : accept a number and Display the * 

// In Vertical order

/*
   Alorithm
           1)START
           2)accept the Input in iValue
           3)Display the * n times 
           4)END
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display * n times 
//  Input : Integer 
//  Output : Void
//  Author : Pratik Purushottam Dhoran
//  Date : 03-02-2024
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    auto int iCnt = 0 ;         //variable to store the loop count

    for (iCnt = 1 ; iCnt<=iNo ; iCnt++)        
    {
        printf("*\n",iCnt);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Display * n times 
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;    // variable to store input

    printf("Enter the Number you want to Display * :");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0 ;
}