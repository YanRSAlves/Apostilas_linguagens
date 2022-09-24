//Ilustrando o uso da instru‡Æo if
// Curso de Linguagem de Programa‡Æo C++ PROG011.CPP - Silvio Sabino
#include<iostream.h>

void main(void){
	int valor_teste;
	cout << "\nDigite um valor inteiro: ";
	cin  >> valor_teste;
	if(valor_teste==2){
		cout << "\nFoi digitado o valor 2.";
		return;
	}
	cout << "\nFoi digitado um valor diferente de 2.";
}
