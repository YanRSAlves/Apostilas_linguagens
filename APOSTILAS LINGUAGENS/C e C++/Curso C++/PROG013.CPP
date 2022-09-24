// Ilustrando o uso do la‡o while e da instru‡Æo switch
// Curso de Linguagem de Programa‡Æo C++ PROG013.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	// inicianaod a vari vel com um valor diferente de 0 para
	// evitar efeito colateral no la‡o while
	int valor=1;

	// se o valor de "valor" for 0, o teste retorna 0 e o la‡o termina
	while(valor){

		cout << "\nDigite um valor inteiro (0 para sair): ";
		cin  >> valor;

		switch(valor){
			case 1: cout << "\nVocˆ digitou o valor 1";
							break;
			case 2: cout << "\nVocˆ digitou o valor 2";
							break;
			case 3: cout << "\nVocˆ digitou o valor 3";
							break;
			default: cout << "\nVocˆ digitou um valor diferente de 1,2 ou 3";
		}
	}
}
