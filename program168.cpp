// Pattern printing
// Dynamic object creation 

#include<iostream>
using namespace std  ;

class Pattern
{
   private : 
   int irow ;
   int icol ;

   public :
    
    Pattern(int x , int y)
    {
        irow = x ;
        icol = y ;
    }

    void Display()
    {
       // logic
    }

};

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    cout<<"Enter number of rows :";
    cin>>iValue1 ;

    cout<<"Enter number of columns :";
    cin>>iValue2 ;

    Pattern *pobj = new  Pattern(iValue1 , iValue2) ;

    pobj->Display();

    delete pobj ;

    return 0 ;
}