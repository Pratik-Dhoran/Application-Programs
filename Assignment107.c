#include<stdio.h>

void Pattern(int iRow , int iCol)
{
   int i = 0;
   int j = 0 ;
   int p = 2;
   int q = 1;

   for(i = 1 ; i <= iRow ; i++)
   {
      for(j = 1 ; j <= iCol ; j++)
      {
         if((i%2)!=0)
         {
           printf("%d\t",p);
           p=p+2;
         }
         else
         {
           printf("%d\t",q);
           q = q+2 ;  
         }
      }
       p = 2 ;
       q = 1 ;
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