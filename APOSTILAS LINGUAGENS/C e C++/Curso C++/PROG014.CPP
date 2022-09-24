// Ilustrando o uso do laáo infinito
// Curso de Linguagem de Programaá∆o C++ PROG014.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	// utlizando um laáo for infinito
	// nota-se que os sinais de ponto-e-v°rgula s∆o mantidos
	for(;;){
		int valor;
		cout << "\nDigite um valor inteiro (0 para sair): ";
		cin  >> valor;
		switch(valor){
			case 0: return;
			case 1: cout << "\nVocà digitou o valor 1";
							break;
			case 2: cout << "\nVocà digitou o valor 2";
							break;
			case 3: cout << "\nVocà digitou o valor 3";
							break;
			default: cout << "\nVocà digitou um valor diferente de 1,2 ou 3";
		}
	}
}
