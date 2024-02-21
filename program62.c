#include<stdio.h>
#include<stdlib.h>

//void Display(int *Arr , int iSize)
void Display(int Arr[], int iSize)
{
   auto int iCnt =0 ;

   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
        printf("%d\n",Arr[iCnt]);
   }

}

int main()
{
    auto int iCount = 0 ;
    auto int *ptr = NULL ;
    auto int i = 0 ; 

    printf("Enter the Number of Elements :");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int));

    printf("Enter the Numbers :\n");
    
    for( i =0 ; i <iCount ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iCount);

    free(ptr);
    
    return 0 ;
}