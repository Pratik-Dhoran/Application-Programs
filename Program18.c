// Problem Statement : Accept length of Side from user and Calculate 
//                     Area of Square 

/*
   Alorithm
           1)START
           2)accept Side into iValue
           3)calculate area Using Side*Side
           4)Display The Area
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : AreaofSquare
//  Description : Calculate area of Square
//  Input : Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////



int AreaofSquare(int iSide )
{
        auto int iArea = 0 ;
        iArea = iSide*iSide ;
        return iArea ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculates area of Square
//
/////////////////////////////////////////////////////////////////////////

int main()
{
        auto int iValue =0 ;
        auto int iAns = 0 ;

        printf("Enter the Side Length :");
        scanf("%d",&iValue);

        iAns = AreaofSquare(iValue);

        printf("The Area of Square is : %d",iAns);

        return 0 ;
}