#include<iostream>
using namespace std;
template<class T,class z>
void fun(T A,z B)
{
    T a;
    z b;

    a=A;
    b=B;
    cout<<a<<endl<<b<<endl;
}
int main()
{
    fun("string",1);
    fun(1,"sourabh");
    fun(11,11);
    fun("string",11.2)
}