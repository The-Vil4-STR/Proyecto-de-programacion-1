#include <iostream>
#include <cmath>
main() {
int a=6;
int b=16;
int x=6;
float y=7.8;

// ejemplos a(uno), b(dos) y c(tres)
std::cout<<"Ejemplo 2"<<std::endl;
bool uno= pow(a, 2)>(b*2);

if (uno){
    std::cout<<"es verdadero"<<std::endl;
 } else {
    std::cout<<"es falso"<<std::endl;
 }
    
 
 bool dos= (x*a+(std::pow(y, 3/4)))<=(std::pow(x, 3/y));
if (dos){
    std::cout<<"es verdadero"<<std::endl;
 } else {
    std::cout<<"es falso"<<std::endl;
 }
 
  bool tres=((1508%6* pow(2, 7))>(7+8* pow(3, 4)))>((15*2)==(60*2/4));
std::cout<<std::boolalpha;
if (tres){
    std::cout<<"es verdadero"<<std::endl;
 } else {
    std::cout<<"es falso"<<std::endl;
 }
 
 return 0;
}