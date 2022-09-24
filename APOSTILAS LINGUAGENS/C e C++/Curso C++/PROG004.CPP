// Ilustrando o uso de classes de armazenamento static e extern
// Arquivo PROG004.CPP
// Curso de Linguagem de Programa‡Æo C++ PROG004.CPP - Silvio Sabino
#include<iostream.h>
int a=0;
static int b;
extern void modifica(void); // declara‡Æo de fun‡Æo para acess -la em outro arquivo

void main(void){
	cout <<  "\nO valor de a ‚: " << a;
	modifica();
	cout << "\n\nE o de B em PROG004.CPP ‚: " << b;
}
