#include<iostream>
using namespace std;
class base
{
private:
    int id;
public:
    base(int a):id(a){}
    friend class derived;
};
class derived
{
public:
    void access(base &b)
    {
        cout<<b.id;
    }

};
int main()
{
    base b(1000);
    derived d;
    d.access(b);

}
