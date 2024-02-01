// Problem Statement : Accept Height and Breadth from user and Calculate 
//                     Area of rectangle 

/*
   Alorithm
           1)START
           2)accept Height and Breadth in iValue1 and iValue2
           3)calculate area Using Heigth*Breadth
           4)Display The Area
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : AreaofRectangle
//  Description : Calculate area of rectangle
//  Input : Integer , Integer
//  Output : Integer
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////



int AreaofRectangle(int iHeight , int iBreadth)
{
        auto int iArea = 0 ;
        iArea = iHeight*iBreadth ;
        return iArea ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculates area of Rectangle
//
/////////////////////////////////////////////////////////////////////////

int main()
{
        auto int iValue1 =0 ;
        auto int iValue2 =0 ;
        auto int iAns = 0 ;

        printf("Enter the Heigth :");
        scanf("%d",&iValue1);

        printf("Enter the Breadth :");
        scanf("%d",&iValue2);

        iAns = AreaofRectangle(iValue1,iValue2);

        printf("The Area of Rectangle is : %d",iAns);

        return 0 ;
}