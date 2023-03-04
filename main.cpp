#include <iostream>

// A simple calc in c++
// made for practice

    using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "******* Calculator *******" << endl;
    cout << "What's type of calc do you would? (+, -, *, /): ";
    cin >> op;

    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2:  ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1+num2;
            cout << "The result is: " << result;
            break;
        case '-':
            result = num1-num2;
            cout << "The result is: " << result;
            break;
        case '*':
            result = num1*num2;
            cout << "The result is: " << result;
            break;
        case '/':
            result = num1/num2;
            cout << "The result is: " << result;
            break;
        default:
            cout << "Error";
            break;
    }
    cout << "**************************" << endl;

    return 0;
}
