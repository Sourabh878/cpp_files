#include<iostream>
using namespace std;
class rubrics:
{
    private:
    int marks1;
    int marks2,marks3;
    public:
     void set(int a,int b,int c)
     {
        marks1=a;
        marks2=b;
        marks3=c;
     }
    int returns()
    {
        int tm=marks1+marks2+marks3;
        return tm;
    }
    friend class student;
};
class student
{
    int total_marks;

     void students(int a)
    {
        total_marks=a;
    }

};
void check(rubrics n,int a)
{
     if(a>n.returns())
     {
        throw runtime_error("student marks can not be greater than rubrics marks");
     }
     else
     {
          student s1;
          s1.students(a);
     }
    

}
int main()
{
    rubrics r1(10,20,30);
    int student_marks;
    cout<<"Enter the student marks:\n";
    cin>>student_marks;
    try
    {
        check(r1,student_marks);
    }
    catch(exception &e)
    {
        cout<<e.what();
    }

}