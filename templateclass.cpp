#include<iostream>
using namespace std;
template<typename T1,typename T2>
class base
{
protected:
    T1 x;
    T2 y;

public:
    base(T1 a,T2 b):x(a),y(b){}
    void printdata()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    base<int,string> b1(2.777,"Sourabh Nakay");
    b1.printdata();
}
