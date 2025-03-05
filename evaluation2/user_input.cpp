#include<iostream>
using namespace std;

class backend {
protected:
    string ip;
    int system_id;
    string owner_id;
    string security_no = "123";

public:
    backend(string a, int b, string c) : ip(a), system_id(b), owner_id(c) {}

    backend() : ip("0"), system_id(0), owner_id("0") {}

    void print() const {
        cout << ip << endl << system_id << endl << owner_id << endl;
    }
};

class user {
protected:
    string username;
    string uid;
    string access_key;

public:
    user() = default;

    user(string username, string uid, string access_key) : username(username), uid(uid), access_key(access_key) {}

    void read() {
        cout << "Read the User input:\n";
        cin >> username >> uid >> access_key;
    }

    void display() const {
        cout << username << endl << uid << endl << access_key << endl;
    }

    string get_access_key() const {
        return access_key;
    }
};

class verification : public backend, public user {
public:
    verification(string a, int b, string c) : backend(a, b, c) {}

    void verify() const {
        if (security_no != get_access_key()) {
            throw runtime_error("No access: invalid security key");
        } else {
            cout << "User got access:\n";
            backend::print();
        }
    }

    void read_user_data() {
        read();
    }

    void display_user_data() const {
        display();
    }
};

int main() {
    cout << "Welcome to Nayak's\n";
    int ch;
    verification v1("02der", 1001, "er445");

    do {
        cout << "1. user_info\n2. backend_access\n";
        cout << "Enter What You Need\n";
        cin >> ch;
        switch (ch) {
            case 1:
                v1.read_user_data();
                v1.display_user_data();
                break;
            case 2:
                try {
                    v1.verify();
                } catch (exception& e) {
                    cout << e.what() << '\n';
                }
                break;
            default:
                cout << "Invalid choice, please try again.\n";
                break;
        }
    } while (ch != 3);

    return 0;
}
