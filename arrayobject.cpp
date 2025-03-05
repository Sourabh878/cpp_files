#include<iostream>
using namespace std;
class student
{
    string name;
    int roll_no;
    string srn;
   // char Division;

    public:
           student():name(""),roll_no(0),srn("")
           {}


             student(string x,int y,string z,char p):name(x),roll_no(y),srn(z)
           {}

           
          void getdata()
          {
            cout<<"enter the student details:\n";
            cout<<"name:\n"<<"rollno:\n"<<"srn:\n"<<"Division:\n";
            cin>>name>>roll_no>>srn;

          }
          void printinfo()
          {
            cout<<endl<<name<<endl<<roll_no<<endl<<srn<<endl;
          }
};
int main()
{
    student a[3];

    cout<<"enter the details of the students:";
    for(int i=0;i<=2;i++)
    {
        a[i].getdata();
    }
    cout<<"the details are:";
    int i=0;
  for( i=0;i<=2;i++)
    {
        cout<<i<<"the student";
        a[i].printinfo();
    }


}

