#include<stdio.h>

void Display(char ch)
{
   printf("%d\t%o\t%x\n",ch,ch,ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Your Character :");
    scanf("%c", &cValue);

    Display(cValue);

    return 0 ;
}