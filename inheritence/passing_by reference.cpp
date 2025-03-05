#include<iostream>
using namespace std;

void changeData(int a)
{
a+=100;
}
void changeData1(int &a)
{
a+=10;
}
int main()
{
int x;
x=10;
cout<<"Before fun call"<<endl;
cout<<x<<endl;

changeData(x);
cout<<"After fun call*****"<<endl;
cout<<x<<endl;

cout<<"************************************"<<endl;

cout<<"Before fun call"<<endl;
cout<<x<<endl;
changeData1(x);

cout<<"After fun call"<<endl;
cout<<x<<endl;

return 0;
}

