// Pattern printing
// Dynamic object creation 

/*
    iRow = 5
    iCol = 5

    $   *   *   *   *
    *   $   1   1   *
    *   0   $   1   *
    *   0   0   $   *
    *   *   *   *   $

*/

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
       int i = 0 , j = 0 ;

       for(i = 0 ; i<= irow ; i++)
       {
        for(j = 0 ; j <=icol ; j++)
        {
            if(i == j)
            {
                cout<<" $ " ;
            }
           else if(i == 0 ||i == irow || j ==0 || j== icol)
            {
                cout<<" * ";
            }
            else if(i<j)
            {
                cout<<" 1 ";
            }
            else if(i>j)
            {
                cout<<" 0 ";
            }
            
        }
          cout<<endl;
       }
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