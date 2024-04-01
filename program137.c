//Accept sting from user and calculate number of character in string 

#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0 ;

    while(str[iCnt] != '\0')
    {
        iCnt++ ;
    }
    
    return iCnt ;
}

int main()
{
    char Arr[20] ;
    int iRet = 0 ;

    printf("Enter the String :");
    scanf("%[^\n]s",Arr);

    iRet = strlenX(Arr);

    printf("There are %d Characters in string \n",iRet);

    return 0 ;
}