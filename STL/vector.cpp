#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5,6,7,8};
    vector<int> v2;
    vector<int>::iterator i= find(v1.begin(),v1.end(),2);
//  vector<int>::iterator i=v1.end();
//  vector<int>::iterator j=v1.begin();
//  cout<<*(i-1)<<endl;
//  cout<<*j<<endl;

if(i!=v1.end())
{
     cout<<"Element fround "<<*i<<"index is"<< distance(v1.begin(),i)<<endl;
     int j=*i;
     cout<<j<<endl;
     v2.push_back(j);
     cout<<v2[0]<<endl;
}

cout<<"swapping"<<endl;

    
}