#include<stdio.h>

void Display(int iNo)
{
if(iNo<10)
{
    printf("HELLO");
}
else{
    printf("DEMO");
}
}

int main()
{
     int iValue = 0 ;

     printf("Enter Number");
     scanf("%d",&iValue);

     Display(iValue);

    return 0 ;
}