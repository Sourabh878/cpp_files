#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1{1, 2, 3, 4, 5};

    // Iterator to the beginning of the vector
    vector<int>::iterator it_begin = v1.begin();
    
    // Iterator to the end of the vector
    vector<int>::iterator it_end = v1.end();

    // Print the value at the beginning
    if (it_begin != v1.end()) { // Check to ensure vector is not empty
        cout << "Value at begin(): " << *it_begin << endl;
    }

    // Print the value one before the end
    if (it_end != v1.begin()) { // Check to ensure vector is not empty
        cout << "Value at end()-1: " << *(it_end-1) << endl;
    }

    return 0;
}
