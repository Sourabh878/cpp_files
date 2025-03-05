#include<iostream>
#include<stdexcept>
using namespace std;
int division(int a,int b)
{
    if(b==0)
    {
        throw invalid_argument("Can not be zero");
    }
    else
    {
        int c=a/b;
        return c;
    }
}
int  main()
{
    int a,b;
    cout<<"Enter the two numbers\n";
    cin>>a>>b;
    try
    {
       int p=division(a,b);
       cout<<p;
    }
    catch(exception &e)
    {
        cout<<e.what();
    }

}