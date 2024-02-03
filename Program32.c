//Problem statement : To Display text number of times user wants

/*
   Alorithm
           1)START
           2)accept the Numbers in iValue
           3)Display the output iValue times
           4)END
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display a statement n times
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
        printf("Jay Ganesh.....\n");
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Display Jay Ganesh N times
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;    // variable to store input

    printf("Enter the Number of times want :");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0 ;
}