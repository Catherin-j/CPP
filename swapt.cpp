#include<iostream>
using namespace std;

// Function template to swap two values
template<typename T>
void tswap(T a, T b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Declare variables
    int a, b;

    // Input values from user
    cout << "Enter a and b: ";
    cin >> a >> b;

    // Output original values
    cout << "Original values: a = " << a << ", b = " << b << endl;

    // Call swap function to swap values
    swap(a, b);

    // Output swapped values
    cout << "Swapped values: a = " << a << ", b = " << b << endl;

    return 0;
}
