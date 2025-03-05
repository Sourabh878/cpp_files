#include <iostream>
#include <stdexcept>
using namespace std;
class message {
protected:
    string inbox;
    string sender;
    string receiver;  // Correct spelling from 'reciver' to 'receiver'
    string type;
public:
    virtual void read() = 0;
    virtual void compose() = 0;
};

class Email : public message {
public:
    void read()  {
        cout << "Compose:\n";
        cout << "Enter your email id: ";
        cin >> sender;
        cout << "Enter receiver's email id: ";
        cin >> receiver;
        cout << "Enter the Message: ";
       cin>>inbox;
    }

    void compose()  {
        if (inbox.empty()) {
            throw runtime_error("Message not sent");
        } else {
            cout << "Message sent successfully";
        }
    }
};

int main() {
    Email e;
    message* m = &e;  // Correctly assign Email object to message pointer

    m->read();

    try {
        m->compose();
    } catch (exception& ex) {
        cout << ex.what() << '\n';
    }

    return 0;
}
