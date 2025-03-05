#include<iostream>
using namespace std;
class student
{
  string name;
    public:
    int roll_no;
     static int srn;//declared

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
 student(string a,int b,int c):name(a),roll_no(b),srn(c)
    {

    };//parameterised  constructor*/
};

int student::srn=0;//define
int main()
{

int srn,roll_no;

/*student b("akshay",4,44);
b.printinfo();
*/
student a;
student b("name",002,32);
//a.get();
b.printinfo();
       // cout<<a.name<<endl;
        cout<<a.roll_no<<endl;
        cout<<a.srn<<endl;
return 0;


}

