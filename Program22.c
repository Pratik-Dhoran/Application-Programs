// Problem Statement : Accept Percentage from user and Display the Passing Class

/*
   Alorithm
           1)START
           2)accept the Class From User
           3)Select the passing class
           4)Display Result
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayClass
//  Description : Displays the Passing Class
//  Input : Float
//  Output : Void
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////

void DisplayClass(float fmarks)
{
    if((fmarks<0.00) || (fmarks>100.00))
    {
        printf("Invalid Input...\n");
    }

    if((fmarks>=0) && (fmarks<35))
    {
        printf("You are FAIL...\n");
    }
    else if((fmarks>=35) && (fmarks<50))
    {
        printf("Your class is PASS CLASS..\n");
    }
    else if((fmarks>=50) && (fmarks<60))
    {
        printf("Your class is SECOND CLASS..\n");
    }
    else if((fmarks>=60) && (fmarks<75))
    {
        printf("Your class is FIRST CLASS..\n");
    }
    else if((fmarks>=75) && (fmarks<=100))
    {
        printf("Your class is FIRST CLASS with Distinction..\n");
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Displays the Passing Class
//
/////////////////////////////////////////////////////////////////////////


int main()
{
   auto float fValue = 0 ;

   printf("Enter the Percentage : ");
   scanf("%f",&fValue);

   DisplayClass(fValue);

   return 0 ;
}
