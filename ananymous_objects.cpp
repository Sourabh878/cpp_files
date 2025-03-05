#include<iostream>
using namespace std;

 class ob{
private:
    int balance;
public:
   
  ob(int a):balance(0){}

  ob(int b):balance(b){}

    setbalance(int a)
    {
        balance=a;
    }
   printinfo()
   {
    cout<<balance;
   }
    ~ob(){cout<<"distrutor";}

    
};

int main()
{

   ob obj1,obj2(20000);
    
  obj1.setbalance(20000);
    obj1.printinfo();
}