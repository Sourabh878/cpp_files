/*2. In a banking system, you have a class representing a bank account with private 
member variables like balance and account number. You want to implement a 
function to transfer funds between two accounts. How would you use a friend 
function to accomplish this securely while maintaining encapsulation?*/
#include<iostream>
using namespace std;
class Bankaccount
{
    protected:
            string accno;
            float balance;
    public:
            Bankaccount():accno(" "),balance(0){}
            
        void read(int a)
        {
            cout<<"Enter your Bank Account number:\n";
            cin>>accno;
            balance=a;
            
        }
        void display()
        {
            cout<<"The remaning balance is of account :\n";
            cout<<"Acconut number:"<<accno<<endl;
            cout<<"Balance:"<<balance<<endl;
        }
        friend void transaction(Bankaccount &b1,Bankaccount &b2,int y);
        

};
void transaction(Bankaccount &b1,Bankaccount &b2,int y)
{
    b1.balance=b1.balance-y;
    b2.balance=b2.balance+y;
    
}
int main()
{
    int x;
   Bankaccount b1,b2;
   b1.read(1000);
   b2.read(5000);
   cout<<"Transfer funds from account 1 to account 2(1)\n";
   cin>>x;
   if(x==1)
   {
         transaction(b1,b2,300);
   }
   else
   {
         transaction(b2,b1,600);
   }
   b1.display();
   b2.display();
    
}

