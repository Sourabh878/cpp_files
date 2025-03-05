#include<iostream>
using namespace std;
class bank
{
    int balance;
    int number;

    public:
          bank():balance(0),number(0)//default constructor
          {}

          bank(int x,int y):balance(x),number(y)//para constructor
          {}

       void printinfo(bank acc)
          {
            cout<<"The account is:"<<balance<<":::"<<number;
          }   
};
int main()
{
    bank acc,acc2(2,3);
   // bank acc1;
    acc.printinfo(acc2);
}