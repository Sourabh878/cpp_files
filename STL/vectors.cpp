#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    int i=1;
    for(i=1;i<5;i++)
    v1.push_back(i);

    for(i=1;i<v1.size();i++)
    cout<<v1[i]<<endl;

    v1[3]=10;

 for(i=1;i<v1.size();i++)
    cout<<v1[i]<<endl;

    vector<string> v2;
    v2.push_back("hello");
     v2.push_back("my");
      v2.push_back("name");
    v2.pop_back();
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<endl;
    cout<<v2.back();
    cout<<v1.front();

    vector<struct> v1;
    
   
}