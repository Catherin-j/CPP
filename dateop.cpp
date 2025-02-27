#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor to initialize date
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overload the ++ operator (prefix) to increment the day
    Date& operator++() {
        ++day;

        // Check for month overflow
        if ((month == 2 && day > 28) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||(day > 31)) {
            day = 1;
            ++month;
        }

        // Check for year overflow
        if (month > 12) {
            month = 1;
            ++year;
        }
        return *this;
    }

    // Overload the << operator for output
    friend ostream& operator<<(ostream& out, const Date& date) {
        out << date.day << "/" << date.month << "/" << date.year;
        return out;
    }
};

int main() {
    Date date(31, 12, 2023);

    cout << "Original Date: " << date << endl;

    ++date;  // Increment date by one day

    cout << "After Increment: " << date << endl;

    return 0;
}
