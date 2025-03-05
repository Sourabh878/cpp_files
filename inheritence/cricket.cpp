#include<iostream>
#include<string>
using namespace std;

class cricket {
private:
    string name;
    int innings;
    float average;  
public:
   // cricket(string x , int n , float c): name(0), innings(0), average(0) {}
    // Constructor
    cricket(string x =" ", int n = 0, float c = 0.0): name(x), innings(n), average(c) {}
   


    // Function to get player's information
    void getinfo() {
        cout << "Enter the player's information: ";
        cin >> name >> innings >> average;
    }

    // Function to update player's average
    void update(float a) {
        average = a;
    }

    // Function to print player's information
    void printinfo() {
        cout << name << endl << innings << endl << average << endl;
    }
};

int main() {
    cricket c[5],c;
   

    cout << "Enter the details of the cricketers" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Information of " << i+1 << "th player" << endl;
        c[i].getinfo();
    }

    for(int i = 0; i < 5; i++) {
        cout << "Information of " << i+1 << "th player" << endl;
        c[i].printinfo();
    }

    // Update the average of the first player
    float new_average;
    cout << "Enter the updated average for the first player: ";
    cin >> new_average;
    c[0].update(new_average);

    cout << "Updated value is: ";
    c[0].printinfo();

    return 0;
}
