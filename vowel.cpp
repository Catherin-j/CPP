#include <iostream>
#include <fstream>
#include <string>
#include <cctype>  // For tolower() function
using namespace std;

bool isvowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    ifstream in("hello.txt"); // Open the file for reading
    if (!in) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    int count = 0;  // Initialize count to 0
    char ch;
    
    // Read each character from the file
    while (in.get(ch)) {
        if (isvowel(ch)) {  // Check if the character is a vowel
            count++;
        }
    }

    cout << "Number of vowels in the file: " << count << endl;

    in.close();  // Close the file
    return 0;
}
