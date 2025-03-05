#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
int main()
{
    list<int> l1{33,11,22,44,55};
    auto i=l1.begin();
    advance(i,3);
    l1.insert(i,101);

      for(auto j=l1.begin();j!=l1.end();j++)
      {
         cout<<*j<<endl;
      }
      l1.sort();
        for(auto j=l1.begin();j!=l1.end();j++)
      {
         cout<<"After sorting"<<endl;
         cout<<*j<<endl;
      }


    

}

