#include<iostream>
using namespace std;

class message {
protected:
    string a; // Change string array to string
public:
    void read() {
        cout << "Enter the message:\n";
        cin >> a;
    }
    void display() {
        cout << "The message is sent\n";
        cout << a << endl; // Added endl
    }
    friend class user;
};

class user {
public:
    string name;
    string id;
    int phone;
    
    void read(message &m) {
        cout << "Enter the details of the user: ";
        cin >> name >> id >> phone;
        m.read(); // Call read method of message
    }
    void display(user &a, message &m) {
        if (a.id == "1234") {
            cout<<"user got the access\n";
            cout << name << endl << id << endl << phone << endl;
            m.display();// Call display method of message
        }
        else {
            throw runtime_error("not registered");
            //cout << "Does not have authorized access to read the message.\n"; // Fixed typo
        }
    }
private:
    //message m; // Declare message object as a member variable
};

int main() {
   message m1;
   
    user u1, u2;

    u1.read(m1);
    u2.read(m1);
     try
     {
    u1.display(u2,m1);

     }
    //u1.display(u2,m1);//user 2 want to read message of user 1
    //u2.display(u1);
    catch (exception &e)
    {
        cout<<e.what();
    }

    return 0;
}
