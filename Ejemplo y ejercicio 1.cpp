#include <math.h>
#include <iostream>
int main(){
using namespace std;
int Numero_de_piezas;
int Capacidad_de_cajas = 5;
float Cajas_necesarias;
cout <<"Ingresa tu numero de piezas"<<endl;
cin >>Numero_de_piezas;
float cajas_necesarias =
    ceil(Numero_de_piezas  / Capacidad_de_cajas);
    cout <<"La cantidad de cajas  que usaras es  " <<cajas_necesarias;
    return 0;
}