// Demonstration of constant object,
// show that constant object can only
// call const member function
 
#include <iostream>
using namespace std;
class Demo {
    int value;
 
public:
    Demo(int v = 0) { value = v; }
    void showMessage()
    {
        cout << "Hello World We are Tushar, "
                "Ramswarup, Nilesh and Subhash Inside"
                " showMessage() Function"
             << endl;
    }
 
    // const member function
    void display() const
    {
        cout << "Hello world I'm Rancho "
                "Baba Inside display() Function"
             << endl;
    }
    void update() const
    {
        value++;
        cout<<"value";
    }
};
int main()
{
    // Constant object are initialised at the time of
    // declaration using constructor
  Demo d1;
    // d1.showMessage();Error occurred if uncomment.
    d1.display();
    //d1.update();
    return (0);
}