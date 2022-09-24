// Funcionamento de ponteiros
// Curso de Linguagem de Programa‡Æo C++ PROG015.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	int valor, *ponteiro = &valor;

	cout << "\nDigite um valor inteiro: ";
	cin  >> valor;
	cout << "\nO valor digitado foi: "<< *ponteiro;

	*ponteiro=10;
	cout << "\nO valor foi modificado para: " << valor;
}
