#include<stdio.h>
#include<stdlib.h>

//void Display(int *Arr , int iSize)
void Display(int Arr[], int iSize)
{
   auto int iCnt =0 ;

   printf("\nElements of the array are : \n");

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
    printf("Dynamic Memory gets allocated for %d elements\n ",iCount);

    printf("Enter the %d Values :\n",iCount);
    
    for( i =0 ; i <iCount ; i++)
    {
        printf("Enter the Element Number %d  :  ",i+1);
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iCount);

    free(ptr);
    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}