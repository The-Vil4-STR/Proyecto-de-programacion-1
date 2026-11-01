#include <iostream>
using namespace std;

int main() {
    int valor;

    cout << "Introduce un valor: ";
    cin >> valor;

    if (valor >= 100) {
        cout << "Es mayor o igual a 100";
    } else {
        cout << "Es menor que 100";
    }

    return 0;
}