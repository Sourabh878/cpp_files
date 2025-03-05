#include<iostream>
using namespace std;
class course
{
    protected:
    string name;
    string code;
    int credit;
public:
    void read()
    {
        cout<<"Enter the course details:";
        cin>>name>>code>>credit;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"code:"<<code<<endl;
        cout<<"credit"<<credit<<endl;
    }
   virtual void rmarks()=0;
   virtual float calculategrade()=0;
   virtual void dmarks()=0;
    
};
class physics:public course
{
    protected:
           int marks;
           float grade;
    public:
    void rmarks()
    {
        course::read();
        cin>>marks;

    }
    void dmarks()
    {
        course::display();
        cout<<"grade:"<<grade;
    }
        float calculategrade()
        { 
            grade=(credit*marks)/100;

           return grade;
        }
};
int main()
{
    course *c;
    physics p;

    c=&p;
    c->rmarks();
    c->calculategrade();
    c->dmarks();

    
}