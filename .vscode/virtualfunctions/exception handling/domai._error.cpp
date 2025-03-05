#include <iostream>
#include <stdexcept>
#include <vector>

int main() 
{
    try {
        std::vector<int> vec = {1, 2, 3};
        std::cout << vec.at(10) << std::endl; // Accessing out of range
    } 
    catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    return 0;
}
