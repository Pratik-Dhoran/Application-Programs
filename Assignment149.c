#include<stdio.h>
#include<string.h>

int LastChar(char *str , char ch)
{  
  int iCnt = 0 ;
  int i = 0 ;

  i=strlen(str);

   while(*str != '\0' )
   {
     if(str[iCnt] == ch)
     {
        return i-iCnt ;
     }
     iCnt++;
   }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0 ;

    printf("Enter String  : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d" , iRet );

    return 0 ;
}