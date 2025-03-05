#include<iostream>
using namespace std;
template<classtype data>
class A
{
    int x;
    int y;

    public:
     template<typename data>
     void fun(data a,data b)
     {
        cout<<a;
        cout<<b;

     }
};
int main()
{
    A a;
    a.fun("sourabh","nayak");
}