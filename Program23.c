// Problem Statement : Accept Standers from user and Display Exam time


//  USING SWITCH CASE


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayExamTime
//  Description : Displays the Exam time 
//  Input : Integer
//  Output : Void
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////


void DislayExamTime(int iStandard)
{
    switch(iStandard)
    {  
       case(1):
       {
        printf("Your Exam is at 8 AM ....\n");
        break;
       }
       case(2):
       {
        printf("Your Exam is at 9 AM ....\n");
        break;
       }
       case(3):
       {
        printf("Your Exam is at 10 AM ....\n");
        break;
       }
       case(4):
       {
        printf("Your Exam is at 11 AM ....\n");
        break;
       }
       case(5):
       {
        printf("Your Exam is at 12 NOON ....\n");
        break;
       }
       default:
       {
        printf("Invalid Input...");
       }
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Displays the Exam time
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iClass =0 ;

    printf("Enter the class ...\n");
    scanf("%d",&iClass);

    DislayExamTime(iClass);

    return 0 ;
}