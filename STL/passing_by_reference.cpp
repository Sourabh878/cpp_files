#include<iostream>
using namespace std;
void fun(int x,int y)
{
   
    x++;
    y--;
}
void fun1(int &x,int &y)
{
   
x++;
y--;
}
int main()
{
   int a=10;
   int b=20;
    fun(a,b);
    cout<<"normal function:"<<a<<endl<<b<<endl;
    fun1(a,b);
    cout<<a<<endl<<b<<endl;

}