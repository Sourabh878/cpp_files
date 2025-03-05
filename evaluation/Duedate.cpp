/*You're building a program to manage a library with various types of items: 
Books, DVDs, and Magazines. Each item can be borrowed and returned, but 
the due date calculation for each type differs. How would you use virtual 
functions to ensure that the correct due date calculation method is invoked 
when an item is borrowed?*/
#include<iostream>
using namespace std;
class library
{
    protected:
             int date;
             int month;
             int year;
    public:
      void read()
      {
        cout<<"Enter the date of Borrow:"<<endl;
        cin>>date>>month>>year;
      }
    
}