#include<iostream>
using namespace std;

class bankaccount//class 
{
    int accnumber;//private member
    int accbalance;

    public://public memeber
           
           void setaccnumber(int a) 
           {
             accnumber=a;
           }
           void setbalance(int b)
           {
            accbalance=b;
           }
           void getbalance()
           {
             cout<<"enter the acc number: ";
             cin>>accnumber;
             cout<<"enter the balance:";
             cin>>accbalance;
           }
           void printinfo()
           {
            cout<<"The accnumber:"<<accnumber<<endl;
            cout<<"The accbalance:"<<accbalance<<endl;
           }
          int putbalance()
           {
            return accbalance;
           }
           int putaccnumber()
           {
            return accnumber;
           }
};
int main()
{
    bankaccount b,a;//object

     b.setaccnumber(1002);
     b.setbalance(20000);
     b.printinfo();
   
    a.printinfo();
    return 0;
 
    a.getbalance();
   cout<<"call"<<a.putbalance()<<endl;
    cout<<"call"<<a.putaccnumber()<<endl;

    cout<<"call"<<b.putbalance()<<endl;
    cout<<"call"<<b.putaccnumber()<<endl;
   
}