#include<iostream>
using namespace std;
void function()
{
    int a=1;
    if(a<10)
    {
        throw ("error");
    }
}
int main()
{ 
    try{
          function();
       }
//    catch(exception &e)
//    {
//        cout<<e.what();
//    }
    catch(const char* a)
    {
       cout<<a;
    }
   

}