#include<stdio.h>
#include<stdlib.h>


int EvenCount(int Arr[], int iSize)
{
   auto int iCnt =0 ;
   auto int iEvenCnt =0 ;

   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
        if((Arr[iCnt]%2)==0)
        {
           iEvenCnt++ ;
        }
   }

    return iEvenCnt ;
}

int main()
{
    auto int iCount = 0 ;
    auto int *ptr = NULL ;
    auto int i = 0 ; 
    auto int iRet = 0 ;

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

    iRet = EvenCount(ptr,iCount);
  
    printf("There are %d Even Elements .\n",iRet);
    
    free(ptr);
    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}