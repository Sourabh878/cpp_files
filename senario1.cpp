/*Consider a customer has bank accounts, they are of type
savings accounts. He can credit debit money to his
accounts and transfer amount from one account to
another. Both the accounts shall have minimum
balance of Rs. 500. Write a cpp program to simulate the
above scenario*/
#include<iostream>
#include<cstring>
using namespace std;
class account
{
    string accno;
    float balance;

   public:
          void setaccno(string x)
          {
             strcpy(accno,x);
          }
          void creditbalance(int y)
          {
            balance=balance-y;
          }
          void debitbalance(int y)
          {
            balance=balance+y;
          }
          void showbalance()
          {
            return balance;
          }
          void accountant_info()
          {
            cout<<"The accountant information:";
            cout<<"Account no:"<<accno<<endl;
            cout<<"Balance:"<<balance;
          }
};
int main()
{
    int n;
    cout<<"Enter the no. of accountant:";
    cin>>n;
    account a[n];

cout<<"   "

}
