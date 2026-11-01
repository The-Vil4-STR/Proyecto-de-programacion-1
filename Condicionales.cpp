#include <string>
#include <iostream>
int main(){
using namespace std;
string nombre;
int edad;
cout<<"Ingresa tu nombre ";getline(cin,nombre);
cout <<"Ingresa tu edad ";(cin>>edad);

if (edad >=18)
cout<<"Puedes ingresar"<<nombre<<"Eres mayor de edad"<<endl;
if (edad <=17)
cout<<"No puedes ingresar"<<nombre<<"No eres mayor de edad"<<endl;
return 0;
}
