#include<iostream>
using namespace std;
class Base
{
    public:
     void show()
    {
        cout<<"Base class"<<endl;
    }

};
class derived:public Base
{
    public:
     void show()
    {
        cout<<"derived class"<<endl;
    }

};
int main()
{
    Base* base;
    base->show();
}
