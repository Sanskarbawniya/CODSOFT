#include <iostream>
#include <cmath>

using namespace std;

void showMenu() {
    cout << "\n=== Welcome to C++ CalcX ===" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "6. Power (x^y)" << endl;
    cout << "7. Exit" << endl;
    cout << "Select an option (1-7): ";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }

        
        if (choice < 1 || choice > 7 || cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero!" << endl;
                } else {
                    cout << "Result: " << num1 / num2 << endl;
                }
                break;
            case 5:
                if (static_cast<int>(num2) == 0) {
                    cout << "Error: Modulus by zero!" << endl;
                } else {
                    cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
                }
                break;
            case 6:
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Unknown error occurred." << endl;
        }
    }

    return 0;
}
