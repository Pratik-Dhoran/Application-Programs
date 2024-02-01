// Problem Statement : Accept 2 values from user and perform the addition.
// using  Programming Conventions 

#include<stdio.h>

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0 ;

    printf("Enter the First Number :");
    scanf("%d",&iValue1);

    printf("Enter the Second Number :");
    scanf("%d",&iValue2);

    iAns = iValue1 + iValue2 ;

    printf("The Addition is : %d",iAns);

     return 0 ;
}