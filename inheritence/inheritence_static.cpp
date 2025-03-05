#include<iostream>
using namespace std;
class A
{
    protected:
    int no;
    static int total;
    static int price;
      public:
    void readprice()
    {
         cin>>no;
        cin>>price;
    }
    void display()
    {
        total=total+price;
        cout<<total;
    }
};
class B:public A
{
     void setinfo()
     {
        readprice();

     }
};
int main()
{
    B b;
    b.setinfo();
}