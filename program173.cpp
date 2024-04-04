
#include<iostream>
using namespace std  ;

class String
{
   private :
   char *str ;
   int iSize ;

   public :
   String()
   {
      iSize = 20 ;
      str = new char[20] ; 
   }

   String(int x)
   {
      iSize = x ;
      str =  new char[x];
   }

   ~String()
   {
    delete []str ;
   }

   void Accept()
   {
    cout<<"Enter the String :"<<endl ;
    cin.getline(str,iSize);
   }

   void Display()
   {
    cout<<"String is : "<<str<<endl ;
   }

   // Logic
};

int main()
{
 String *sobj1 = new String() ;  
 String *sobj2 = new String(30) ;

 sobj1->Accept();
 sobj1->Display();

 sobj2->Accept();
 sobj2->Display();

delete(sobj1,sobj2);

 return 0 ;

}