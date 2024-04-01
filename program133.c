#include<stdio.h>

int main()
{
    char Arr[20] ;

    printf("Enter the String :");
    scanf("%[^\n]s",Arr);

    printf("Entered String : %s",Arr);

    return 0 ;
}