#include <iostream>
using namespace std;
template<typename t>
class Stack {
private:
    int max;   // Maximum size of the stack
    t*  arr;  // Dynamic array to store stack elements
    int top;   // Index of the top element

public:
    // Constructor
    Stack(t size) {
        top = -1;
        max = size;
        arr = new t[max];
    }

    // Destructor to release allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push function
    void push(t item) {
        if (!isFull()) {
            top++;
            arr[top] = item;
            cout << "Pushed: " << item << endl;
        } else {
            cout << "Error: Stack is full!" << endl;
        }
    }

    // Pop function
    t pop() {
        if (!isEmpty()) {
            t item = arr[top];
            top--;
            cout << "Popped: " << item << endl;
            return 1;
        } else {
            cout << "Error: Stack is empty!" << endl;
            return 1;
        }
    }

    // Peek function
    t peek() {
        if (!isEmpty()) {
            cout << "Top element: " << arr[top] << endl;
            return 1;
        } else {
            cout << "Error: Stack is empty!" << endl;
            return 1;
        }
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Check if stack is full
    bool isFull() {
        return (top == max - 1);
    }
};

int main() {
    cout << "Enter the size of the stack: ";
    int size;
    cin >> size;

    // Create a Stack object
    Stack<int> stack(size);

    while (true) {
        // Menu
        cout << "\nMenu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the item to push: ";
                int item;
                cin >> item;
                stack.push(item);
                break;
            }
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
