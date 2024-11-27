#include<stdio.h>

void StrREvX(char *str)
{
   cArr[20];
   cArr[i]= *str;

   int iCnt = 0 ;
   int i =0 , j =0  ;

   while(*str != '\0')
   {
     iCnt++;
   }

   for(i=iCnt ; i>= 0 ; i--)
   {
      str[j] = cArr[i];
      j++;
   }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0 ;

    printf("Enter String  : ");
    scanf("%[^'\n']s",arr);

    StrREvX(arr);

    printf("Modified String is %s" , arr );

    return 0 ;
}