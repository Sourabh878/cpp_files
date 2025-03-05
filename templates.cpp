#include<iostream>
using namespace std;
template<typename data>
void function(data a)
{
    cout<<a<<endl;
}
int main()
{
    function(12);
    function("Sourabh");
    function('e');
    function(199.00);
}

