#include<iostream>
#include<stdexcept>
using namespace std;
class base
{
    protected:
    int i;

};
class derived:public base
{

};
int main()
{   try
{
    base b;
    derived &d=dynamic_cast<derived&>(b);
}
catch(bad_cast& e )
{
    cout << e.what() << '\n';
}

    

    
}