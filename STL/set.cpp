#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(5);
    auto i=s.begin();
    advance(i,1);
    s.erase(i);


for(auto i=s.begin();i!=s.end();i++)
{
    cout<<*i<<endl;
}
    
}