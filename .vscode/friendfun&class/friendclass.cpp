#include<iostream>
using namespace std;

class Vehicle {
protected:
    string number;
    int mileage;
    string type;
    string model;

public:
    void read() {
        cin >> number >> mileage >> type >> model;
    }

    void display() {
        cout << number << endl << mileage << endl << type << endl << model << endl;
    }

    friend class Maintenance; // Corrected spelling of Maintenance
};

class Bike { // Renamed class to start with a capital letter
public:
    string cc;

public:
    void read() {
        cin >> cc;
    }

    void display() {
        cout << cc << endl;
    }

    friend class Maintenance; // Corrected spelling of Maintenance
};

class Maintenance {
public:
    void displayMaintainedVehicle(Vehicle &v) {
        cout << "Info of maintained vehicle:\n";
        cout << v.number << endl << v.mileage << endl << v.type << endl << v.model << endl;
    }

    void displayMaintainedBike(Bike &b) {
        cout << "Info of maintained bike:\n";
        cout << b.cc << endl;
    }
};

int main() {
    Vehicle v;
    Bike b;
    Maintenance m;

    cout << "Enter vehicle details (number, mileage, type, model):\n";
    v.read();
    cout << "Enter bike details (cc):\n";
    b.read();

    cout << "\nVehicle details:\n";
    v.display();
    cout << "\nBike details:\n";
    b.display();

    // Maintenance details
    m.displayMaintainedVehicle(v);
    m.displayMaintainedBike(b);

    return 0;
}
