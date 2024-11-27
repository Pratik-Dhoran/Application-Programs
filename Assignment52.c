#include<stdio.h>

double RectArea (float fWidth , float fHeight)
{
    double dArea ;

    dArea = fHeight * fWidth ;

    return dArea ;
}

int main ()
{
    float fvalue1 = 0.0f ;
     float fvalue2 = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter Width : ");
    scanf("%f",&fvalue1);
    
    printf("Enter Height : ");
    scanf("%f",&fvalue2);

    dRet = RectArea(fvalue1,fvalue2);

    printf("The Area is : %lf " ,dRet);

    return 0; 
}