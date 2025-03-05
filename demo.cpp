#include<iostream>
using namespace std;

class base
{
    public:
     virtual void show()
     {
        cout<<"i am base";
     }
};
class der:public base
{
    public:
    void show()
    {
        cout<<"i am derived";
    }
};
int  main()
{
    base b;
  //  b.show();
    der d;
  //  d.show();
    b=d;
  //  b.show();
    base *c;
    c=&d;
    c->show();



}
