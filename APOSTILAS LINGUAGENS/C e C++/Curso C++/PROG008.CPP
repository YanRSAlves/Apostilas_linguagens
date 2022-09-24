// Ilustrando os efeitos dos operadores bit a bit
// Curso de Linguagem de Programa‡Æo C++ PROG008.CPP - Silvio Sabino
#include<iostream.h>
#include<conio.h>
int numero=10;

void main(void){
	clrscr();
	cout << "\nnumero incrementado:           " << ++numero;
	cout << "\nnumero novamente incrementado: " << numero++;
	cout << "\nnumero decrementado:           " << --numero;
	cout << "\nnumero novamente decrementado: " << numero--;
}
