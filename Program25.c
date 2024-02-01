// Problem Statement : Accept Standers from user and Display Exam time


//  USING IF ELSE LADDER

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

void DisplayExamTime(int iStandard)
{
    if((iStandard<=0) || (iStandard>5))
    {
        printf("Invalid Class..\n");
    }

    if(iStandard == 1)
    {
        printf("Your Exam is at 8 AM ...\n");
    }
    else if(iStandard == 2)
    {
        printf("Your Exam is at 9 AM...\n");
    }
    else if (iStandard == 3)
    {
        printf("Your Exam is at 10 AM...\n");
    }
    else if (iStandard == 4)
    {
        printf("Your Exam is at 11 AM...\n");
    }
    else if (iStandard == 5)
    {
        printf("Your Exam is at 12 NOON...\n");
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Displays the Exam time
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iClass = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iClass);

    DisplayExamTime(iClass);

    return 0;
}