#include<iostream>
using namespace std;
void op(int a[5])

{
    cout<<a[6];
    throw out_of_range("The max size is 5");
}

int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
          cin>>a[i];
    }
   
    try
    {
        op(a);
    }
    catch(out_of_range &e)
    {
        cout<<e.what()<<endl;
    }


}
