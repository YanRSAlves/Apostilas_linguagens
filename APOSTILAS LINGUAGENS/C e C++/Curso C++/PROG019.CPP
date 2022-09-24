// Ilustrando a sobrecarga de fun‡Æo
// Curso de Linguagem de Programa‡Æo C++ PROG019.CPP - Silvio Sabino
#include<iostream.h>
int cubo(int n){
	return (n*n*n);
}

float cubo(float n){
	return (n*n*n);
}

void main(void){
	int inteiro;
	float real;

	cout << "\nDigite um valor inteiro: ";
	cin  >>inteiro;
	cout << "\nDigite um valor real: ";
	cin  >>real;

	cout << "\nO cubo do valor inteiro ‚: " << cubo(inteiro);
	cout << "\nO cubo do valor real ‚   : " << cubo(real);
	return;
}
