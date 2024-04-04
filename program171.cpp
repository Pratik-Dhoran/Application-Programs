
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
 String sobj(30) ;

 sobj.Accept();
 sobj.Display();

 return 0 ;

}