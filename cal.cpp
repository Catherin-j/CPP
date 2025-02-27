

#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    
private:
    T num1, num2;
public:
    // Default Constructor with default values
    Calculator(T a = 0, T b = 0) {
  num1=a;
   num2=b;
    }  

    // Setter functions to set the values of num1 and num2 after object creation
    void setValues(T a, T b) {
        num1 = a;
        num2 = b;
    }

    // Addition
    T add()  {
        return num1 + num2;
    }

    // Subtraction
    T subtract()  {
        return num1 - num2;
    }

    // Multiplication
    T multiply()  {
        return num1 * num2;
    }

    // Division
    T divide()  {
        if (num2 == 0) {
            throw runtime_error("Division by zero is undefined.");
        }
        return num1 / num2;
    }

};

int main() {
   
    Calculator<double> calc;

    // Alternatively, use setter functions to set values later
    calc.setValues(10.5, 2.5);

    // Perform and display operations
    try {
        cout << "Addition: " << calc.add() << endl;
        cout << "Subtraction: " << calc.subtract() << endl;
        cout << "Multiplication: " << calc.multiply() << endl;
        cout << "Division: " << calc.divide() << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
