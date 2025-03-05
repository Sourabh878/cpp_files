#include<iostream>
using namespace std;
class Base{
    int a;
    public:
        void read()
        {
            cout<<"i am in the base now\n";
            cin>>a;
        }
        void display()
        {
            cout<<a;
        }
};
class D1:public Base{
    int b;
    public:
        void read()
        {
            cin>>b;
             
        }
        void display()
        {
            cout<<"i am in the derived now\n";
            cout<<b;
        }
};
int main()
{
     Base *ptr;
    // ptr->read();
    // ptr->display();
     
    D1 d;
    ptr=&d;
    ptr->read();
    ptr->display();

}