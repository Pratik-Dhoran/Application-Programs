#include<stdio.h>

void Display(char ch)
{
   if (ch >='A' && ch <='Z')
   {
    while(ch <= 'Z')
    {
    printf("%c\t",ch);
    ch++;
    }
   }
   else if (ch >='a' && ch <='z')
   {
    while(ch>= 'a')
    {
    printf("%c\t",ch);
    ch--; 
    }
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