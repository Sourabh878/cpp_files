#include<iostream>
using namespace std;
class bank
{
    public:
         int balance;
         getbalance()
         {
            cout<<"enter the balaance";
            cin>>balance;
         }
};

class account:public bank{       //inheritence
    public:
        int account;
        getaccount()
        {
            cout<<"enter the account no.";
            cin>>account;
        }

        printinfo()
        {cout<<balance<<endl<<account;}
};
int main()
{
    account a1,a2;
    a1.getaccount();
    a1.getbalance();
    a1.printinfo();
}