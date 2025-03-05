#include<iostream>
using namespace std;
template<typename T1>
class stack
{
private:
    T1 a[10];
    int top=-1;
    int N=5;

public:
    void push(T1 item)
    {
        if(N==5)
        {
            throw runtime_error("The Stack is Full");
        }
        else
        {
            top++;
            a[top]=item;
        }


    }
    void pop()
    {
        if(top==-1)
        {
            throw runtime_error("Stack is empty");
        }
        else
        {
            a[top--];
            cout<<top<<endl;
        }

    }
    void display()
    {
        if(top==-1)
        {

            throw runtime_error("Stack is empty");
        }
        else
        {
            int i;
        for(int i=top;i!=-1;i--)
        {
            cout<<a[i]<<endl;
        }

         }
}
};
int main()
{
    stack<string> s1;
    try{
        s1.push("Sourabh");
        s1.push("nayak");
         s1.push("humble");
         s1.push("man");
       s1.push("eee");
       s1.push("iiii");
    }
    catch(exception &e)
     {

         cout<<e.what()<<endl;
     }

   stack<int> s2;
   try{
        s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.display();
    s1.display();
    s1.pop();
    s1.display();
     }
     catch(exception &e)
     {

         cout<<e.what()<<endl;
     }
     return 0;

}

