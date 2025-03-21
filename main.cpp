#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    cout << "Произведение чисел: " << a * b << endl;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n';  
    cout << "Результат деления: " << a / b << endl;

    return 0;
}
