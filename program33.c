//Problem statement : Display Jay Ganesh 5 times

// using Iteration Approach

/*
   Alorithm
           1)START
           2)Display the "Jay Ganesh..." 5 times
           4)END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display a Jay Ganesh 5 times
//  Input : -
//  Output : -
//  Author : Pratik Purushottam Dhoran
//  Date : 03-02-2024
//
/////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;    //variable to store loop counter

    for(iCnt = 0; iCnt <= 4; iCnt++)
    {
        printf("Jay Ganesh...\n");  
    }  

}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of a Application which Display Jay Ganesh 5 times
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}