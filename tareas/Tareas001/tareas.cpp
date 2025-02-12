#include <iostream>

using namespace std;

int main() {
    int numero1, numero2;

    cout << "Introduzca el primer número: ";
    cin >> numero1;
    cout << "Introduzca el segundo número: ";
    cin >> numero2;

    int sum = numero1 + numero2;
    int mult = numero1 * numero2;

    cout << "La suma del " << numero1 << " y del " << numero2 << " será: " << sum << endl;
    cout << "La multiplicación del " << numero1 << " y del " << numero2 << " será: " << mult << endl;

    return 0;
}