//Accept sting and character from user and calculate how many times it occurs in string 

#include<stdio.h>

int Count(char str[], char ch)
{
    int iCnt = 0 ;

    while(*str != '\0')
    {
        if(*str == ch)
        {
         iCnt++ ;
        }
        str++;
    }
    
    return iCnt ;
}

int main()
{
    char Arr[20] ;
    char cValue = '\0' ;
    int iRet = 0 ;

    printf("Enter the String :");
    scanf("%[^\n]s",Arr);

    printf("Enter the Character :");
    scanf("%c",&cValue);

    iRet = Count(Arr,cValue);

    printf("Count of '%c' in string is : %d \n",cValue,iRet);

    return 0 ;
}