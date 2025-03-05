#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{7,8,9,0,6};

     v1.swap(v2);
     for(int i=0;i<v1.size();i++)
     cout<<v1[i]<<endl;
     cout<<"swapped";
     v1.insert(v1.begin()+2,222);


     reverse(v1.begin(),v1.end());
     for(int i=0;i<v1.size();i++)
     cout<<v1[i]<<endl;

    }