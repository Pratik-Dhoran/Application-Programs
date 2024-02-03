//Problem statement : Display Hello and the loop count

// using Iteration Approach

/*
   Alorithm
           1)START
           2)Display the Hello - number  5 times
           4)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display a Hello and loop count
//  Input : -
//  Output : -
//  Author : Pratik Purushottam Dhoran
//  Date : 03-02-2024
//
/////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;    //variable to store loop counter

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Hello  %d\n",iCnt);  
    }  

}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Display Hello and loop count
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}