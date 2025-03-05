#include<iostream>
using namespace std;
class bankAccount
{
 private:
     int bal;
     int accno;

 public:
    bankAccount(int a,int b):bal(a),accno(b){}
    void print()
   {
       cout<<"Bank BAlance\n"<<bal;
       cout<<"Bank Account\n"<<accno;

   }
   friend void transaction(bankAccount &a ,bankAccount &b,int y);
};
void transaction(bankAccount &a ,bankAccount &b,int y)
{
    a.bal=a.bal+y;
    b.bal=b.bal-y;
}
int main()
{
    int balance;
    cout<<"Enter The Balance to be trans\n";
    cin>>balance;
    bankAccount b1(500,222),b2(2000,333);
    transaction(b1,b2,balance);
    b1.print();
    b2.print();

}
