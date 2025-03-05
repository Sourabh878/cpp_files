#include<iostream>
using namespace std;
class bankAccount
{
    protected:
        int accno;
        float bal;
    public:
       void read()
       {
        cout<<"Enter the acc no. with balance\n";
        cin>>accno>>bal;
       }
       int send()
       {
        return bal;
       }
       void display()
       {
        cout<<"accbalance :"<<bal<<endl;
       }
       friend int transaction(bankAccount &A1,bankAccount &A2,int y);
};
 int transaction(bankAccount &A1,bankAccount &A2,int y)
{
    int x=y;
   A1.bal=A1.bal+x;
   A2.bal=A2.bal-x;
    cout<<"Transacton successful\n";
    A1.display();
    A2.display();
}
int main()
{
bankAccount a,b;
int v;
a.read();
b.read();
a.display();
b.display();
cout<<"Enter the amount to be transefered:"<<endl;
cin>>v;
transaction(a,b,v);
//a.display();

//b.display();

}