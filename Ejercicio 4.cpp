#include <iostream>
#include <cmath>
#include <string>
int main() {
    using namespace std;
    int decision;
    int decision_2;
    int decision_3;
    int operacion_1 = 3;
    int calculo_con_math = 2;
    int usa_operadores_logicos = 4;
    int nombre = 1;
    string nombre_usuario;
    string apellido;

    float valor_1;
    float valor_2;

    cout << "Catalogo de operaciones" << endl;
    cout << "1_ Introducir datos de usuario" << endl;
    cout << "2_ Hacer operaciones matematicas sencillas" << endl;
    cout << "3_ Operaciones matematicas complejisimas y de ingeniero" << endl;
    cout << "4_ Operadores logicos" << endl;
    cout << "Ingresa que opcion quieres hacer(1-4): ";
    cin >> decision;

   
    if (decision == nombre) {
        cout << "Ingresa tu nombre: ";
        cin >> nombre_usuario;
        cout << "Ingresa tu apellido: ";
        cin >> apellido;
        cout << "Hola " << nombre_usuario << " " << apellido << endl;
        return 0;
    }

    
    if (decision == calculo_con_math) {
        cout << "Que operacion quieres hacer" << endl;
        cout << "Suma = 1" << endl;
        cout << "Resta = 2" << endl;
        cout << "Multiplicacion = 3" << endl;
        cout << "Division = 4" << endl;
        cin >> decision_2;

        if (decision_2 == 1) {
            cout << "Ingresa el valor 1: ";
            cin >> valor_1;
            cout << "Ingresa el valor 2: ";
            cin >> valor_2;
            cout << "La suma es: " << valor_1 + valor_2 << endl;
            return 0;
        }
        if (decision_2 == 2) {
            cout << "Ingresa el valor 1: ";
            cin >> valor_1;
            cout << "Ingresa el valor 2: ";
            cin >> valor_2;
            cout << "La resta es: " << valor_1 - valor_2 << endl;
            return 0;
        }
        if (decision_2 == 3) {
            cout << "Ingresa el valor 1: ";
            cin >> valor_1;
            cout << "Ingresa el valor 2: ";
            cin >> valor_2;
            cout << "La multiplicacion es: " << valor_1 * valor_2 << endl;
            return 0;
        }
        if (decision_2 == 4) {
            cout << "Ingresa el valor 1: ";
            cin >> valor_1;
            cout << "Ingresa el valor 2: ";
            cin >> valor_2;
            if (valor_2 == 0) {
                cout << "Error: no se puede dividir entre cero." << endl;
                return 0;
            }
            cout << "La division es: " << valor_1 / valor_2 << endl;
            return 0;
        }
        cout << "Opcion no valida." << endl;
        return 0;
    }

    
    if (decision == operacion_1) {
        cout << "Asi que quieres hacer operaciones matematicas?" << endl;
        cout << "Bien, dime, que quieres hacer?" << endl;
        cout << "Raiz cuadrada = 1" << endl;
        cout << "Elevar un numero = 2" << endl;
        cout << "Valor absoluto = 3" << endl;
        cout << "Redondeo hacia abajo = 4" << endl;
        cout << "Redondeo hacia arriba = 5" << endl;
        cout << "Redondeo mas cercano = 6" << endl;
        cin >> decision_3;

        if (decision_3 == 1) {
            cout << "Ingresa el numero: ";
            cin >> valor_1;
            if (valor_1 < 0) {
                cout << "Error: no hay raiz cuadrada real de un numero negativo." << endl;
                return 0;
            }
            cout << "La raiz cuadrada es: " << sqrt(valor_1) << endl;
            return 0;
        }
        if (decision_3 == 2) {
            cout << "Ingresa la base: ";
            cin >> valor_1;
            cout << "Ingresa el exponente: ";
            cin >> valor_2;
            cout << "El resultado es: " << pow(valor_1, valor_2) << endl;
            return 0;
        }
        if (decision_3 == 3) {
            cout << "Ingresa el numero: ";
            cin >> valor_1;
            cout << "El valor absoluto es: " << fabs(valor_1) << endl;
            return 0;
        }
        if (decision_3 == 4) {
            cout << "Ingresa el numero: ";
            cin >> valor_1;
            cout << "Redondeo hacia abajo: " << floor(valor_1) << endl;
            return 0;
        }
        if (decision_3 == 5) {
            cout << "Ingresa el numero: ";
            cin >> valor_1;
            cout << "Redondeo hacia arriba: " << ceil(valor_1) << endl;
            return 0;
        }
        if (decision_3 == 6) {
            cout << "Ingresa el numero: ";
            cin >> valor_1;
            cout << "Redondeo al mas cercano: " << round(valor_1) << endl;
            return 0;
        }
        cout << "Opcion no valida." << endl;
        return 0;
    }

   
    if (decision == usa_operadores_logicos) {
        cout << "Opcion de operadores logicos seleccionada." << endl;
        cout << "AND (&&) = 1" << endl;
        cout << "OR (||) = 2" << endl;
        cout << "NOT (!) = 3" << endl;
        cin >> decision_3;

        cout << boolalpha; 

        if (decision_3 == 1) {
            cout << "Ingresa el valor 1 (0 = falso, otro numero = verdadero): ";
            cin >> valor_1;
            cout << "Ingresa el valor 2 (0 = falso, otro numero = verdadero): ";
            cin >> valor_2;
            cout << "valor 1 && valor 2 = " << (valor_1 != 0 && valor_2 != 0) << endl;
            return 0;
        }
        if (decision_3 == 2) {
            cout << "Ingresa el valor 1 (0 = falso, otro numero = verdadero): ";
            cin >> valor_1;
            cout << "Ingresa el valor 2 (0 = falso, otro numero = verdadero): ";
            cin >> valor_2;
            cout << "valor 1 || valor 2 = " << (valor_1 != 0 || valor_2 != 0) << endl;
            return 0;
        }
        if (decision_3 == 3) {
            cout << "Ingresa el valor (0 = falso, otro numero = verdadero): ";
            cin >> valor_1;
            cout << "!valor = " << !(valor_1 != 0) << endl;
            return 0;
        }
        cout << "Opcion no valida." << endl;
        return 0;
    }

   
    cout << "Opcion no valida." << endl;
    return 0;
}