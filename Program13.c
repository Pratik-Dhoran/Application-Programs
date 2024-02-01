// Problem Statement : Accept Marks from user and Calculate percentage

/*
   Alorithm
           1)START
           2)accept the obtained and total marks in iValue1 and iValue2
           3)calculate Percentage by (iMarks/iTotalMarks)*100
           4)Display Result
           5)END
*/
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePercentage
//  Description : it calculates Percentage
//  Input : Integer , Integer
//  Output : Float
//  Author : Pratik Purushottam Dhoran
//  Date : 31-01-2024
//
/////////////////////////////////////////////////////////////////////////

float CalculatePercentage(int iMarks , int iTotalMarks)
{
    auto float iPer = 0 ;

    iPer=(((float)iMarks/(float)iTotalMarks)*100);
    
    return iPer ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which calculates Percentage
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0 ;
    auto int iValue2 = 0 ;
    auto float iAns = 0.0f ;

    printf("Enter the Obtained Marks :");
    scanf("%d",&iValue1);

    printf("Enter the Total Marks :");
    scanf("%d",&iValue2);

    iAns = CalculatePercentage(iValue1,iValue2);

    printf("The Percentage are : %f",iAns);

    return 0 ;
}
