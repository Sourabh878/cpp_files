#include<iostream>
using namespace std;
void operation(int &a,int &b)
{
    int num;
    if(b==0)
{
    throw runtime_error("my name is surabh nayak i am the boss");
}
else
    num=a/b;


}
int main()
{
    int num2=0,num1=1;
    try
    {
     operation(num1,num2);
    }

    
    catch(exception &e)
    {
        cout<<e.what();
    }

    
}