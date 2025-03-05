#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFromFile(const string& filename) {
    ifstream inFile(filename); // Create an input file stream (ifstream) object to read from the file
    string line; // Declare a string to hold each line read from the file

    if (inFile.is_open()) { // Check if the file was successfully opened
        while (getline(inFile, line)) { // Read the file line by line
            cout << line << endl; // Output each line to the console
        }
        inFile.close(); // Close the file stream
    } else {
        cout << "Unable to open file for reading." << endl; // Output an error message if the file cannot be opened
    }
}

int main() 
{
    string filename = "example.txt"; // Define the filename to be read
    readFromFile(filename); // Call the readFromFile function to read and print the file contents
    return 0;
}
