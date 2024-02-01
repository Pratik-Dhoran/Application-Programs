// Problem Statement : Accept 2 values from user and perform the addition using Function.

#include<stdio.h>

//Additon is a Function which performs addition of two Numbers

int Addition(int iNo1 , int iNo2)
{
    int iSum = 0 ;
    iSum = iNo1 + iNo2 ;
    return iSum ;
}

int main()
{
    auto int iValue1 = 0 ;
    auto int iValue2 = 0 ;
    auto int iAns = 0 ;

    printf("Enter the first Number : ");
    scanf("%d",&iValue1);

    printf("Enter the second Number : ");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1 , iValue2);

    printf("The Addition is : %d",iAns);

    return 0 ;
}
