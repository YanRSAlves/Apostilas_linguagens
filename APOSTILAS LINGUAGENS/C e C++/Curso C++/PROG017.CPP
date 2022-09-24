// Operadores new e delete
// Curso de Linguagem de Programa‡Æo C++ PROG017.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	int *valor, itens;
	cout << "\nDigite o n£mero de itens: ";
	cin  >>itens;
	if(!(valor=new int[itens]))
		cout << "\nMem¢ria insuficiente!";
	else{
		cout << "\nAloca‡Æo dinƒmica efetuda com suceso!";
		delete(valor);
	}
}
