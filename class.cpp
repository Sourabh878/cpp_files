#include<iostream>
using namespace std;
class student
{
  string name;
    public:
    int roll_no;
    int srn;

    student(string a,int b,int c)
{}
    

    void printinfo()
    {
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<srn<<endl;
    }
    void set (string a,int b,int c)
    {
        name=a;
        roll_no=b;
        srn=c;

    }
    void get()
    {
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the srn:";
        cin>>roll_no;
        cout<<"enter the rollno.:";
        cin>>srn;
    }
    student(string a,int b,int c)
    {
        name=a;
        roll_no=b;
        srn=c;
    }//parameterised  constructor
};
int main()
{

student b ("name",002,32);//parameterised constructor
b.printinfo();
student a;
a.set("so",33,44);
a.printinfo();
       // cout<<a.name<<endl;
        cout<<b.roll_no<<endl;
        cout<<b.srn<<endl;
return 0;


}
