// Funcionamento de ponteiros void
// Curso de Linguagem de Programa‡Æo C++ PROG016.CPP - Silvio Sabino
#include<iostream.h>

int inteiro;
float flutuante;
void *pointer=&inteiro;

void main(void){

	*(int *)pointer = 2;
	pointer = &flutuante;
	*(float *)pointer = 3.0;

	cout << "\nValor int: " << inteiro << "\nValor float: " << flutuante;
}
