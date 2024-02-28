#include<iostream>
using namespace std;

class Date {
private:
    int Day;
    int Month;
    int Year;

public:
    // Exercise 2: Default Constructor
    Date() {
        Day = 1;
        Month = 1;
        Year = 1926;
        cout << "Default Constructor Called!" << endl;
    }

    // Exercise 4: Input Function
    void Input() {
        cout << "Enter Day: "; cin >> Day;
        cout << "Enter Month: "; cin >> Month;
        cout << "Enter Year: "; cin >> Year;
    }

    // Exercise 5: Setters
    void Setters(int a, int b, int c) {
        Day = a;
        Month = b;
        Year = c;
    }

    // Exercise 6: Getters
    void Getters(int &a, int &b, int &c) {
        a = Day;
        b = Month;
        c = Year;
    }

    // Exercise 3: Print Function
    void print() {
        cout << Day << "/" << Month << "/" << Year << endl;
    }
};

int main() {
    cout << "Default Constructors Called!" << endl;

    int a, b, c; // Variables to store getters result

    // Exercise 1: Create object of Date "dat1"
    Date dat1;

    // Exercise 3: Print object dat1
    cout << "Date1: ";
    dat1.print();

    // Exercise 4: Input function
    dat1.Input();
    cout << "Date1 after input: ";
    dat1.print();

    // Exercise 5: Create object xmasDay using default constructor
    Date xmasDay;
    cout << "XmasDay before setter: ";
    xmasDay.print();

    // Set xmasDay to 25/12/2020 using setters
    xmasDay.Setters(25, 12, 2020);

    // Get and print xmasDay using getters
    xmasDay.Getters(a, b, c);
    cout << "XmasDay using getters: " << a << "/" << b << "/" << c << endl;

    system("pause");
    return 0;
}
