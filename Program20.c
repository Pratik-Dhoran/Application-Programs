// Problem Statement : Accept 3 Numbers from user and calculate average 
               

/*
   Alorithm
           1)START
           2)accept the Numbers in iValue1 , iValue2 and iValue3
           3)calculate average using (iValue1+iValue2+iValue3)/3
           4)Display The Average
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Average
//  Description : Calculate Average of 3 Numbers
//  Input : Integer , Integer
//  Output : Float
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////



float Average(int iNo1, int iNo2 , int iNo3)
{
        auto float fAvg = 0.0f ;
        fAvg = (((float)iNo1+(float)iNo2+(float)iNo3)/3) ;
        return fAvg ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculates average of 3 numbers
//
/////////////////////////////////////////////////////////////////////////

int main()
{
        auto int iValue1 =0 ;
        auto int iValue2 =0 ;
        auto int iValue3 =0 ;
        auto float fAns = 0.0f ;

        printf("Enter First Number :");
        scanf("%d",&iValue1);

        printf("Enter Second Number :");
        scanf("%d",&iValue2);

        printf("Enter Third Number :");
        scanf("%d",&iValue3);

        fAns = Average(iValue1,iValue2,iValue3);

        printf("The Average is : %f",fAns);

        return 0 ;
}