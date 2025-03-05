#include<iostream>
using namespace std;
template<typename T>
void print(T a)
{

    T c=a;
    cout<<"the value of passed parameter is:"<<c<<endl;
}
int main()
{
    int a=10;
    string c="sourabh";
    float k=10.2;
    print(a);
    print(k);
    print(c);


}