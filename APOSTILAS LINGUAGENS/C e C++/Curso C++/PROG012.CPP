//Ilustrando o uso do la�o for e da instru��o switch
// Curso de Linguagem de Programa��o C++ PROG012.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	// corpo do la�o for, aten��o �s declara��es
	// de vari�veis dentro da inicializa��o.
	// O programa executar� 5 vezes as instru��es dentro do bloco
	for(register int i = 0; i < 5;i ++){

		int valor;
		cout << "\nDigite um valor inteiro: ";
		cin  >> valor;

		// a instru��o switch testar� o valor de "valor" e
		// direcionar� o programa para o case certo
		switch(valor){
			case 1: cout << "\n\nVoc� digitou o valor 1";
							break;
			case 2: cout << "\n\nVoc� digitou o valor 2";
							break;
			case 3: cout << "\n\nVoc� digitou o valor 3";
							break;
			default: cout << "\n\nVoc� digitou um valor diferente de 1,2 ou 3";
		}
	}
}