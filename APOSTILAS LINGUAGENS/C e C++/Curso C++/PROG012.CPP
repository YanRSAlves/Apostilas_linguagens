//Ilustrando o uso do la‡o for e da instru‡Æo switch
// Curso de Linguagem de Programa‡Æo C++ PROG012.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	// corpo do la‡o for, aten‡Æo …s declara‡äes
	// de vari veis dentro da inicializa‡Æo.
	// O programa executar  5 vezes as instru‡äes dentro do bloco
	for(register int i = 0; i < 5;i ++){

		int valor;
		cout << "\nDigite um valor inteiro: ";
		cin  >> valor;

		// a instru‡Æo switch testar  o valor de "valor" e
		// direcionar  o programa para o case certo
		switch(valor){
			case 1: cout << "\n\nVocˆ digitou o valor 1";
							break;
			case 2: cout << "\n\nVocˆ digitou o valor 2";
							break;
			case 3: cout << "\n\nVocˆ digitou o valor 3";
							break;
			default: cout << "\n\nVocˆ digitou um valor diferente de 1,2 ou 3";
		}
	}
}