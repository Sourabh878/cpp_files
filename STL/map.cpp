#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="man";
    m[3]="women";
    m[2]="ganga";
    int i=0;
    for(i=0;i<4;i++)
    {
        cout<<m[i]<<endl;
    }

}