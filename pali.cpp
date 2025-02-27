#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

class pal {
private:
    string str;

public:
    // Constructor to initialize the string
    pal(const string& input) : str(input) {}

    // Overload the == operator to check if the string is a palindrome
    bool operator==(const pal& p) const {
        string reversed = str;
        reverse(reversed.begin(), reversed.end()); // Reverse the string
        return str == reversed; // Compare the original string with its reverse
    }
};

int main() {
    ifstream out("hello.txt"); // Open the file for reading
    if (!out) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    string line;
    while (getline(out, line)) { // Read each line from the file
        pal p(line); // Create an object of class pal with the line

        // Use the overloaded == operator to check if the string is a palindrome
        if (p == p) {
            cout << "Palindrome: " << line << endl;
        } else {
            cout << "Not a palindrome: " << line << endl;
        }
    }

    out.close(); // Close the file
    return 0;
}
