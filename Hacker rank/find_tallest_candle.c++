#include <iostream>
#include <vector>
using namespace std;

// Forward declaration of the function
int birthdayCakeCandles(vector<int> candles);

void main() {
    vector<int> a = {18, 90, 90, 13, 90, 75, 90, 8, 90, 43};  // Input array
    int c = birthdayCakeCandles(a);  // Call the function
    cout << c << endl;  // Output the result
    
}

int birthdayCakeCandles(vector<int> candles) {
    int max = candles[0];  // Initialize `max` with the first element
    int c = 0;  // Initialize the count
    
    // Find the maximum value in the vector
    for (int i = 1; i < candles.size(); i++) {
        if (candles[i] > max) {
            max = candles[i];  // Update `max` if a larger value is found
        }
    }
    
    // Count how many times the maximum value appears
    for (int j = 0; j < candles.size(); j++) {
        if (candles[j] == max) {
            c++;  // Increment the count if `max` is found
        }
    }
    
    return c;  // Return the count
}
