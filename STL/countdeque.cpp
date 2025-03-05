#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
class bank
{
    public:
    string accno;
    float balance;
    public:
    bank(string a,float b):accno(a),balance(b){}

    void print()
    {
        cout<<accno<<endl<<balance<<endl;
    }
};
class create
{
    deque<bank> b;
     int count;
    public:
    void push(string a,float c)
    {
        b.push_back(bank(a,c));
        // b.push_front(bank(a,c));
    }
    void search()
    {
        for(auto i=b.begin();i!=b.end();)
        {
            if((i->balance)==5000)
            {
                count++;
                i++;
            }
            else
            {
                i++;
            }
        }
    }
    int re()
    {
        for(auto i=b.begin();i!=b.end();i++)
        {
           i->print();
        }
        return count;
    }

};
int main()
{
    create a;
    a.push("sjsj",5000);
     a.push("sjaasj",5000); 
     a.push("err",12);
      a.push("sjsj",1);

      a.search();
      int n=a.re();
      cout<<n;
}
