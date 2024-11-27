#include<stdio.h>

void Display(char ch)
{
   if (ch >='A' && ch <='Z')
   {
    ch = ch + 32 ;
    printf("%c",ch);
   }
   else if (ch >='a' && ch <='z')
   {
     ch = ch - 32 ;
     printf("%c",ch);
   }
   else
   {
    printf("Incorrect Character . \n");
   }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Your Character :");
    scanf("%c", &cValue);

    Display(cValue);

    return 0 ;
}