#include<iostream>
using namespace std;
template<typename T,typename U>
class A
{
    private:
    T kaka;
    U mama;
    public:
    void print(T u,U b)
    {
        cout<<"the value is:"<<u<<endl<<b;
    }


};
int main()
{
    A c;
    
    c<string,int>.print("sourabh",1);
}