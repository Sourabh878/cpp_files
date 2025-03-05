#include<iostream>
using namespace std;
class a
{
    private:
    int p,b;
    public:
    a():p(0),b(0){}
    a(int c,int d):p(c),b(d){}
    void print()
    {
        cout<<p,b;
    }
};
class pl:public a
{
    private:
    int lms;
    public:
    pl():a(),lms(0){}

    pl(int l,int c,int b):a(l,c),lms(b){}
      void print()
      {
        cout<<lms;
      }

};
int main()
{   a a1;
    pl p(1,2,3);
}
