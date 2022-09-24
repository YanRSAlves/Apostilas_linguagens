// Ilustrando os efeitos dos operadores bit a bit
// Curso de Linguagem de Programa‡Æo C++ PROG007.CPP - Silvio Sabino

#include<iostream.h>
unsigned int valor1=7;
unsigned int valor2=64512;

void main (void){
	cout << "\n\n    7 em bin rio ‚ 0000000000000111";
	cout << "\n64512 em bin rio ‚ 1111110000000000\n";
	cout << "\n    7<<1 = " << (valor1<<1) << "      0000000000001110";
	cout << "\n    7<<2 = " << (valor1<<2) << "      0000000000011100";
	cout << "\n64512>>1 = " << (valor2>>1) << "   0111111000000000";
	cout << "\n64512>>2 = " << (valor2>>2) << "   0011111100000000";

}
