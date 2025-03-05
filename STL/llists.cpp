#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {1, 2, 3, 4, 5, 6};
    l1.push_back(11);
    l1.pop_front();
    auto i = l1.begin();
    advance(i, 3);//brings iterator to 3rd position
    l1.insert(i, 55);
    l1.count(4);
    // Iterate using an iterator
    for (auto it = l1.begin(); it != l1.end(); ++it) 
    {
        cout << *it;
    }
    cout << endl;

    return 0;
}
