#include <iostream>
using namespace std;

int main() {
    double dato1, dato2, dato3, dato4, dato5;

    cout << "Ingresa el primer dato: ";
    cin >> dato1;

    cout << "Ingresa el segundo dato: ";
    cin >> dato2;

    cout << "Ingresa el tercer dato: ";
    cin >> dato3;

    cout << "Ingresa el cuarto dato: ";
    cin >> dato4;

    cout << "Ingresa el quinto dato: ";
    cin >> dato5;

    double promedio = (dato1 + dato2 + dato3 + dato4 + dato5) / 5.0;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}