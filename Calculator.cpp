#include <iostream>
#include <string>
using namespace std;

int main() {
    char op;
    float num1, num2;
    string input;
    cout << "********************************" << endl;
    cout << "* Follow the Input Format      *" << endl;
    cout << "* (a + b, a / b, a - b, a * b) *" << endl;
    cout << "* Follow the Stop Format       *" << endl;
    cout << "* (0 stop 0)                   *" << endl;
    cout << "********************************" << endl;

    do {

        cout << "Enter The Input : ";
        cin >> num1 >> input>> num2;
        if (input == "stop")
            break;

        op = input[0];

        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 == 0)
                    cout << "Error! Division by zero." << endl;
                else
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                break;
            default:
                cout << "Error! Invalid operator." << endl;
                break;
        }
    } while (true);

    cout << "Calculator stopped." << endl;

    return 0;
}
