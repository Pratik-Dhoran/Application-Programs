#include<stdio.h>

void Pattern(int iRow , int iCol)
{
   int i = 0;
   int j = 0 ;

   for(i = iRow ; i > 0 ; i--)
   {
      for(j = 1 ; j <= iCol ; j++)
      {
         if(i==1 || j==1 || j==iCol || i==iRow || i == j)
         {
           printf("*\t");
         }
         else if ( j > i)
         {
            printf("#\t");
         }
         else
         {
           printf("$\t");  
         }
      }
       printf("\n");
   }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of Rows & Columns :");
    scanf("%d%d",&iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}