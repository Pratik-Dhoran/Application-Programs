//Problem statement : To Display numbers from 1 to user given value

/*
   Alorithm
           1)START
           2)accept the Input in iValue
           3)Display the output from 1 to iValue 
           4)END
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display Numbers from 1 to n
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
        printf("%d\n",iCnt);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Display Numbers from 1 to N 
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;    // variable to store input

    printf("Enter the Number to which you want to Display on screen :");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0 ;
}