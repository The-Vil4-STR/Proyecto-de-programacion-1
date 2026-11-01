#include <string>
#include <iostream>
int main(){
using namespace std;
string Nombre;
float Calificacion1;
float Calificacion2;
float Calificacion3;
float Promedio;

 cout<<"Ingresa tu nombre";getline(cin, Nombre);
 cout<<"Ingresa tus calificacion 1";(cin>> Calificacion1);
 cout<<"Ingresa tus calificacion 2";(cin>>Calificacion2);
 cout<<"Ingresa tus calificacion 3";(cin>> Calificacion3);
float promedio(Calificacion1 + Calificacion2 + Calificacion3 / 3);
if (promedio >= 70)
cout<<"Felicidades, pasaste"<<endl;
if (promedio <=69.9)
cout<<"Felicidades, reprobaste :D"<<endl;
return 0;
}