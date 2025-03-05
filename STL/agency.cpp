#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
class agency
{
 private:
 string rented;
 string available;
  list<string> a1;
  list<string> r1;

 public:
  
  void push(string a)
  {
   a1.push_back(a);
  }
  void getforrent(string b)
  {
    auto i=find(a1.begin(),a1.end(),b);
    r1.push_back(*i);
    a1.remove(*i);
  }
  void printavailable()
  {
    for(auto j=a1.begin();j!=a1.end();j++)
    {
        cout<<*j<<endl;
    }
  }
  void printrented()
  {
     for(auto i=r1.begin();i!=r1.end();i++)
     {
        cout<<*i<<endl;
     }
  }
  
};
int main()
{
    class agency a1;
    a1.push("maruti");
    a1.push("suzuki");
    a1.push("toyota");
    a1.push("tata");
    a1.push("banze");
    a1.printavailable();
    cout<<"Get for rent:"<<endl;
    a1.getforrent("toyota");
    a1.printrented();
    cout<<"total available"<<endl;
    a1.printavailable();

}