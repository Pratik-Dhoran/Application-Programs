
void Displayfactor(int iNo)
{
    int i = 0 ;

    if(iNo<=0)
    {
        iNo = -iNo;
    }
    for(i=1 ; i<=(iNo/2) ; i++)
    {
        if((i%2)==0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
  int iValue =0 ;

  printf("Enter Number : ");
  scanf("%d",&iValue );

  Displayfactor(iValue);

   return 0 ;
}
