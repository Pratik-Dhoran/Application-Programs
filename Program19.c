// Problem Statement : Accept Height and Base from user and Calculate 
//                     Area of Triangle

/*
   Alorithm
           1)START
           2)accept Height and Base in iValue1 and iValue2
           3)calculate area Using 0.5*Heigth*Base
           4)Display The Area
           5)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : AreaofTriangle
//  Description : Calculate area of Triangle
//  Input : Integer , Integer
//  Output : Float
//  Author : Pratik Purushottam Dhoran
//  Date : 01-02-2024
//
/////////////////////////////////////////////////////////////////////////



float AreaofTriangle(int iHeight , int iBase)
{
        auto float fArea = 0 ;
        fArea = (0.5)*((float)iHeight)*((float)iBase) ;
        return fArea ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Calculates area of Triangle
//
/////////////////////////////////////////////////////////////////////////

int main()
{
        auto int iValue1 =0 ;
        auto int iValue2 =0 ;
        auto float fAns = 0 ;

        printf("Enter the Heigth :");
        scanf("%d",&iValue1);

        printf("Enter the Base :");
        scanf("%d",&iValue2);

        fAns = AreaofTriangle(iValue1,iValue2);

        printf("The Area of Triangle is : %f",fAns);

        return 0 ;
}