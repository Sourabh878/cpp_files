#include<iostream>
#include<stdexcept>
using namespace std;
class bankaccount
{
    public:
         int acc_no;
         int bal;
    void set(int a,int b)
    {
        if(a>100||bal<1000)
        {
            throw runtime_error("overflow is h");
        }
        else
        {
             acc_no=a;
              bal=b;
        }
        
    }
    void display()
    {
        
        cout<<acc_no<<endl<<bal;
    }
};
int main()
{
    bankaccount c;
    int a,b;

    cout<<"Enter the account no. and balance"<<endl;
    cin>>a>>b;

    try
    {
      c.set(a,b);
     c.display();
    }
    catch(runtime_error &e)
    {
        cout<<e.what();
    }

}