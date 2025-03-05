#include<iostream>
using namespace std;

class employee
{
    public:
    int eid;
    string name;
    int eno;
    employee():eid(0),name(""),eno(0){}
    employee(int a,string b, int c):eid(a),name(b),eno(c){}

   void getinfo()
    {
        cout<<"ENTER DETAILS";
        cout<<"eid"<<"name"<<"pno";
        cin>>eid>>name;
    }
};
class project
{
    public:
    int pno;
    string pname;
    int pid;
    project():pno(0),pname(""),pid(0){}
    project(int a,string b,int c):pno(a),pname(b),pid(c){}
   void getproject()
    {
        cout<<"ENTER THE DETAILS OF THE PROJECT";
        cout<<"PNO"<<"PNAME"<<"""PID";
        cin>>pno>>pname>>pid;
    }
};
class department:public employee,public project{
    int dno;
    public:
    department():project(),employee(),dno(0){}
    department(int a,int p,string q, int r,int s,string b,int c):dno(0),employee(p,q,r),project(s,b,c){}
    void get()
    {cout<<"enter the department no.";
    cin>>dno;
    }

 void  printinfo()
   {
          cout<<eid<<endl<<name<<endl;
    
          cout<<endl<<pname<<endl<<pid<<endl<<dno;
   }
};
int main()
{
    department d1,d2;
    d1.getinfo();
    d1.getproject();
    d1.printinfo();
}