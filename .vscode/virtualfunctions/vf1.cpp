#include<iostream>
using namespace std;
class Base{
    private:
         int a;
         string name;
    public:
        virtual void display()
        {
            cout<<name<<a;
        }
};
class Derived:public Base{

    private:

        int c;
        string id;
    public:
        void read()
        {
            cin>>c>>id;
        }
        void display()
        {
         cout<<c<<id;
        }

};
int main()
{
    Base *B;
    Derived d1;
    B=&d1;
    d1.read();
    B->display();


}

