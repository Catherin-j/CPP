#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // Include this for std::reverse
using namespace std;

int main() {
   string line;
    ofstream out("hello.txt");
    cout<<"string?";
    getline(cin,line);
    out<<line;
    out.close();
    ifstream in("hello.txt"); // Open the file for reading
    if (!in) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    while (getline(in, line)) { // Read each line from the file
        string reversed = line;
        reverse(reversed.begin(), reversed.end()); // Reverse the string
        if (line == reversed) {
            cout << "Palindrome: " << line << endl;
        }else{
            cout<<"1";
        }
    }

    in.close(); // Close the file
    return 0;
}
