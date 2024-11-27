#include<stdio.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
  int iCnt = 0 ;

  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(Arr[iCnt]== iNo )
    {  
       return iCnt ;
    } 
    
  }
}

int main()
{
    int iSize = 0, iRet = 0 , iCnt =0 , iValue = 0 ;
    int *p = NULL ;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    printf("Enter the Number ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }

    printf("Enter %d element\n",iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter Elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = FirstOcc(p , iSize , iValue);

     if(iRet== iSize)
     {
        printf("There is no such number");
     }
     else
     {
        printf("First occurence of number is %d",iRet);
     }
    
    free(p);

     return 0 ;
}