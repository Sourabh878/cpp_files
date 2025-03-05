#include <iostream>
using namespace std;

class datastruct {
public:
    virtual void append(int x) = 0;
    virtual void remove() = 0;
    virtual void display() = 0;
};

class stacker : public datastruct {
protected:
    int stack[10];
    int top;
public:
    stacker() : top(-1) {}
    
    void append(int x) override {
        if (top >= 9) {
            cout << "Stack overflow\n";
            return;
        }
        stack[++top] = x;
    }
    
    void remove() override {
        if (top < 0) {
            cout << "Stack underflow\n";
            return;
        }
        top--;
    }
    
    void display() override {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
};

class queuer : public datastruct {
protected:
    int queue[10];
    int front, rear;
public:
    queuer() : front(0), rear(0) {}
    
    void append(int y) override {
        if (rear >= 10) {
            cout << "Queue overflow\n";
            return;
        }
        queue[rear++] = y;
    }
    
    void remove() override {
        if (front == rear) {
            cout << "Queue underflow\n";
            return;
        }
        front++;
    }
    
    void display() override {
        if (front == rear) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i < rear; i++) {
            cout << queue[i] << endl;
        }
    }
};

int main() {
    datastruct* d;
    stacker s;
    queuer q;
    
    d = &s;
    d->append(4);
    d->append(6);
    d->append(8);
    d->remove();
    d->display();
    
    cout << "Switching to queue...\n";
    
    d = &q;
    d->append(1);
    d->append(2);
    d->append(3);
    d->remove();
    d->display();
    
    return 0;
}
