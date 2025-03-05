/*You're developing a messaging application with classes for users and messages. 
To ensure security, you want to restrict access to certain message data only to 
authorized users. How would you use a friend class to grant access to sensitive 
message information while preventing unauthorized access from other parts of 
the application?*/
#include<iostream>
using namespace std;
class message
{
    private:
    string note;
    public:

    void type()
    {
        cout<<"Write The message:\n";
        cin>>note;
    }
    void show()
    {
        cout<<note<<endl;
    }
    friend class user;

};
class user
{
    private:
    string email;
    string key;
    public:
  
    void compose(message &m1,user &u1,user &u2)
    {
        cout<<"Enter the access key"<<endl;
        cin>>u1.key>>u2.key;
        cout<<"Enter the your mail:"<<endl;
        cin>>u1.email;
        cout<<"Enter The mail of receiver:\n"<<endl;
        cin>>u2.email;
        m1.type();
        cout<<"Message Sent successfully:";
        
    }
    void access(message &m1,user &u1)
    {
        if(u1.key=="Nayak@123")
        {
            cout<<"Access Granted\n";
            m1.show();
        }
        else
        {
            throw runtime_error("invalid choice");
        }
    }


};
int main()
{
    message m1;
    user u1,u2;
    u1.compose(m1,u1,u2);
    try
    {    cout<<"User 2 trys to access the mail\n";
         u1.access(m1,u2);
    }
    catch(exception& e)
    {
      cout<<e.what()<<'\n';123
    }
    
   
}