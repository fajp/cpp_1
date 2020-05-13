#include <iostream>
#include "Complex.h"

int main() {
    using namespace std;
    char sign;
    cout << "To do calculations, input Re and Im parts of Complex number\n"
        << "Next, input required calculation (Calc). Avaiable operations: +, -, *\n"
        << "Input 'q' to exit\n\n";
    cout << "Re: ";
    double r, i;
    if (cin >> r) cout << "Im: ";
    else return 0;
    if (cin >> i) cout << "Calc: ";
    Complex result(r, i);
    cin >> sign;
    while (!Complex::isavailable(sign)) {
        cout << "Uknown operation!\n"
            << "Calc: ";
        cin >> sign;
    }
    cout << "Re: ";
    while (cin >> r) {
        cout << "Im ";
        if (!(cin >> i)) break;
        Complex z(r, i);
        switch (sign) {
            case '+':
                result = result + Complex(r, i);
                cout << result << endl;
                break;
            case '-':
                result = result - Complex(r, i);
                cout << result << endl;
                break;
            case '*':
                result = result * Complex(r, i);
                cout << result << endl;
                break;
        }
        cout << "Calc: ";
        cin >> sign;
        while (!Complex::isavailable(sign)) {
            cout << "Uknown operation!\n"
                << "Calc: ";
            cin >> sign;
        }
        cout << "Re: ";
    }


    return 0;
}