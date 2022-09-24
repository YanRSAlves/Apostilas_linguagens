// Ilustrando o uso de classes de armazenamento static e extern
// Arquivo PROG005.CPP
// Curso de LInguagem de Programa‡Æo C++ PROG005.CPP - Silvio Sabino
#include<iostream.h>
extern int a;
static int b=2;

void modifica(void){
	a=a+1;
	cout << "\n\nO valor de a mudou para: " << a;
	cout << "\nE o de B em PROG005.CPP ‚: " << b;
}
