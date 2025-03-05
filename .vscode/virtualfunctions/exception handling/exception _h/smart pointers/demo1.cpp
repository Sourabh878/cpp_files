#include<iostream>
#include<memory>
using namespace std;
void fun()
{
    int x=10;
    unique_ptr<int> p1(&x);//p1 is pointing to 10

    
    cout<<*p1<<endl;
    unique_ptr<int> p2;
    p2=move(p1);
    cout<<*p2<<endl;
    if(x==10)
    {
        return;
    }
    


}
int main()
{
    fun();
    
}