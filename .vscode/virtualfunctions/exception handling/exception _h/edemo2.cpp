//function include class friend functios and error handling;
#include<iostream>
using namespace std;
class Bankaccount
{
    private:
     int cid;
     double bal;

    public:
     void set(int a,double b)
     {
        if(a>100)
        {
          throw "the cid can not acced 100";
        }
        else
        {
            cid=a;
            bal=b;
        }
       
     }
     void display()
     {
        cout<<"The details of the bank account\n";
        cout<<cid<<endl<<bal<<endl;
     
     }
     friend void transaction(Bankaccount &a,Bankaccount &b,int y);
};
void transaction(Bankaccount a,Bankaccount b,int y)
{
    if(a.bal<10||b.bal<10)
    {
        throw "balance limit";

    }
    else
    {
        a.bal=a.bal-y;
        b.bal=b.bal+y;
        cout<<a.bal<<endl<<b.bal<<endl;
    }
}
int main()
{
    Bankaccount a,b;
    transaction(a,b,10);
}
 