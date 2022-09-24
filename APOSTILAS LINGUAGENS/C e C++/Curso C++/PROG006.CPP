// Ilustrando os efeitos dos operadores bit a bit
// Curso de Linguagem de Programa‡Æo C++ PROG006.CPP - Silvio Sabino

#include<iostream.h>
unsigned int zeros=0;
unsigned int uns=255;
unsigned int medio=127;

void main(void){
	cout << "\n\n  0 em bin rio ‚  0000000000000000";
	cout << "\n127 em bin rio ‚  0000000001111111";
	cout << "\n255 em bin rio ‚  0000000011111111\n";
	cout << "\n0 & 255   = " << (zeros & uns) << "     0000000000000000";
	cout << "\n0 | 255   = " << (zeros | uns) << "   0000000011111111";
	cout << "\n0 ^ 255   = " << (zeros ^ uns) << "   0000000011111111";
	cout << "\n~0        = " << (~zeros) << " 1111111111111111";
	cout << "\n0 & 127   = " << (zeros & medio) << "     0000000000000000";
	cout << "\n0 | 127   = " << (zeros | medio) << "   0000000001111111";
	cout << "\n0 ^ 127   = " << (zeros ^ medio) << "   0000000001111111";
	cout << "\n~127      = " << (~medio) << " 1111111110000000";
	cout << "\n255 & 127 = " << (uns & medio) << "   0000000001111111";
	cout << "\n255 | 127 = " << (uns | medio) << "   0000000011111111";
	cout << "\n255 ^ 127 = " << (uns ^ medio) << "   0000000010000000";
	cout << "\n~255      = " << (~uns) << " 1111111100000000";
}

