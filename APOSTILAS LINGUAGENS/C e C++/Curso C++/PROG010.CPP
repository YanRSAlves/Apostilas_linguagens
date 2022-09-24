// Ilustrando os resultados dos operadores relacionais e l¢gicos
// Curso de Linguagem de Programa‡Æo C++ PROG010.CPP - Silvio Sabino
#include<iostream.h>

int a, b, c;

void main(void){
cout << "\n\nInforme o primeiro valor: ";
cin  >>a;
cout << "Informe o segundo valor: ";
cin  >>b;
cout << "Informe o terceiro valor: ";
cin  >>c;

cout << "o "<<((a>=b && a>=c)?"1o.":(b>=c)?"2o.":"3o.")<<"no. ‚ maior";
}
