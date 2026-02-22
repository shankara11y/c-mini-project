#include <iostream>
using namespace std;

/* Function declarations */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result = " << add(num1, num2);
            break;

        case '-':
            cout << "Result = " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result = " << multiply(num1, num2);
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Error: Division by zero!";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}

/* Function definitions */
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
