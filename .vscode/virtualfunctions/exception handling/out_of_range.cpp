#include<iostream>
using namespace std;
class fun
{
    int *p=nullptr,i;
    p=new int[10];

    if(p==nullptr)
    {
        throw runtime_error("error");
    }
    else
    {
        for(i=0;i<3;i++)
        {
            cin>>p[i];
        }
    }
}
