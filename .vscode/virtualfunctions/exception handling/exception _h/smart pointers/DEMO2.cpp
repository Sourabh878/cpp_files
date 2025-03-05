#include<iostream>
#include<memory>
using namespace std;
int main()
{
  int  a[6]={1,2,3,4,5,6};
    unique_ptr<int> p1(&a[1]);
    cout<<*p1;
    p1++;
    cout<<*p1;
   
}