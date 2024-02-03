//Problem statement : To Display numbers from user given value to 1

/*
   Alorithm
           1)START
           2)accept the Input in iValue
           3)Display the output from iValue to i1 
           4)END
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display Numbers from n to 1
//  Input : Integer 
//  Output : Void
//  Author : Pratik Purushottam Dhoran
//  Date : 03-02-2024
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    auto int iCnt = 0 ;         //variable to store the loop count

    for (iCnt = iNo ; iCnt>=1 ; iCnt--)        
    {
        printf("%d\n",iCnt);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Display Numbers from N to 1 
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0 ;    // variable to store input

    printf("Enter the Number from which you want to Display on screen :");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0 ;
}