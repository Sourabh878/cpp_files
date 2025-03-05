#include<iostream>
using namespace std;
class base
{
    public:
     void show()
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
void  mian()
{
    base b;

    b.show();
    
}