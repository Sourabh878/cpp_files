#include<iostream>
using namespace std;
int main()
{
    string a="sourabh";
    string b="nayak";

    if(a==b)
    {
        cout<<"equal";
    }

    a=b;
    cout<<a<<endl<<b;
    int c=a.find("naya");
    if(c!=1)
    {
        cout<<c;
    }
    

}