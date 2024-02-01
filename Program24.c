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

void DisplayExamTime(int iStandard)
{
    switch(iStandard)
    {
        case 1: 
            printf("Your exam is at 8 AM\n");
            break;
        case 2: 
            printf("Your exam is at 9 AM\n");
            break;
        case 3: 
            printf("Your exam is at 10 AM\n");
            break;
        case 4: 
            printf("Your exam is at 11 AM\n");
            break; 
        case 5: 
            printf("Your exam is at 12 NOON\n");
            break;
        default:
            printf("Wrong input..\n");
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