#include <string>
#include <iostream>
int main(){
using namespace std;
string nombre,apellido, aula, nc;
int edad;
cout<<"Ingresa tu nombre, por favor";getline (cin,nombre);
cout <<"Ingresa tu apellido, por favor ";getline (cin,apellido);
cout <<"Ingresa tu grupo"; getline (cin,aula);
cout <<"Ingresa tu edad";(cin>>edad);
nc= nombre+ apellido;
cout<<"Bienvenid@"<<nc<<"Tu edad es"<<edad<<"estas en el salon"<<aula<<endl;
return 0;
}