#include<iostream>
using namespace std;

class statics {
    int accn;
    int accb;
    static int counter;
public:
    statics() : accn(0), accb(0) {
        counter++;
    }
    statics(int x, int y) : accn(x), accb(y) {
        counter++;
    }
    int getobjectcount() {
        return counter;
    }

};

int statics::counter = 0;// Define static variable outside the class

int main() 
{
    statics a,b(1,2),c;
    cout << a.getobjectcount();
    return 0;
}
