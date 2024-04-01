#include<stdio.h>

void Display(char * str)
{
    printf("Entered strinig is : %s",str);
}

int main()
{
    char Arr[20] ;

    printf("Enter the String :");
    scanf("%[^\n]s",&Arr);

    Display(Arr);

    return 0 ;
}