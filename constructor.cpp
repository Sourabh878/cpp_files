#include<iostream>
using namespace std;
class bank
{
    int anumber;
    float balance;
 public:

    //default contructor
    bank():anumber(0),balance(0)
    {

    }

    //parameterised constructor
    bank(int x,float y):anumber(x),balance(y)
    {

    }

    void printinfo()
    {
        cout<<"acc number will be:"<<anumber<<endl;
        cout<<"balance will be:"<<balance<<endl;
    }

};
int main()
{
     bank a;//default constructor
     a.printinfo();
  
    bank b(1002,10000);//parameterised constructor

    bank c(b);//bank c=b;
    c.printinfo();//copy constructor;

    b.printinfo();


}