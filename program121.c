
/*
7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Display(int iNo)
{
    int k = 0, p = iNo  ;
    int iRow = ((iNo*2)-1) ;
    int iCol = ((iNo*2)-1) ;
    
    
    
        for(int i = 1; i <= iRow ; i++  )
         {
            for(int j = 1 ; j <= iCol ; j++)
              {
                    if((i==1+0) || (i==iRow-0) || (j==1+0) || (j==iCol-0))
                    {
                      printf("%d ",iNo);
                    } 
                    else if((i==1+1) || (i==iRow-1) || (j==1+1) || (j==iCol-1))
                    {
                      printf("%d ",iNo-1);
                    } 
                    else if((i==1+2) || (i==iRow-2) || (j==1+2) || (j==iCol-2))
                    {
                      printf("%d ",iNo-2);
                    } 
                     else if((i==1+3) || (i==iRow-3) || (j==1+3) || (j==iCol-3))
                    {
                      printf("%d ",iNo-3);
                    } 
                     else if((i==1+4) || (i==iRow-4) || (j==1+4) || (j==iCol-4))
                    {
                      printf("%d ",iNo-4);
                    } 
                     else if((i==1+5) || (i==iRow-5) || (j==1+5) || (j==iCol-5))
                    {
                      printf("%d ",iNo-5);
                    } 
                     else if((i==1+6) || (i==iRow-6) || (j==1+6) || (j==iCol-6))
                    {
                      printf("%d ",iNo-6);
                    } 
                     else if((i==1+7) || (i==iRow-7) || (j==1+7) || (j==iCol-7))
                    {
                      printf("%d ",iNo-7);
                    } 
                     else if((i==1+8) || (i==iRow-8) || (j==1+8) || (j==iCol-8))
                    {
                      printf("%d ",iNo-8);
                    }  
                    else if((i==1+9) || (i==iRow-9) || (j==1+9) || (j==iCol-9))
                    {
                      printf("%d ",iNo-9);
                    }
                            
                  }  
            printf("\n");
        } 
}

int main() 
{
    int i =0 ;
    int j = 0 ;
    int n;
    scanf("%d", &n);
      
   
    Display(n);  
    
    return 0;
}
