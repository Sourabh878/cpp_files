#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
class task {
private:
    string tid;
    string descrip;
    int priority;

public:
    task(string a, string b, int c) : tid(a), descrip(b), priority(c) {}

    friend class manage;
};

class manage {
private:
    list<task> l;

public:
    void push(string a, string b, int c) {
        l.push_back(task(a, b, c));
    }

    void show() {
        for (auto i = l.begin(); i != l.end(); ++i) {
            cout << i->tid << " " << i->descrip << " " << i->priority << endl;
        }
    }

    void find()
    {
       for (auto i = l.begin(); i != l.end(); ++i) 
       {
        if(i->tid=="2")
        {
            cout<<i->priority;
        }
       }
    }
};

int main() {
    manage m;
    m.push("2", "Task 1 description", 1);
    m.push("2", "Task 2 description", 2);
    m.show();

    return 0;
}
