// Ilustrando o uso do la�o infinito
// Curso de Linguagem de Programa��o C++ PROG014.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	// utlizando um la�o for infinito
	// nota-se que os sinais de ponto-e-v�rgula s�o mantidos
	for(;;){
		int valor;
		cout << "\nDigite um valor inteiro (0 para sair): ";
		cin  >> valor;
		switch(valor){
			case 0: return;
			case 1: cout << "\nVoc� digitou o valor 1";
							break;
			case 2: cout << "\nVoc� digitou o valor 2";
							break;
			case 3: cout << "\nVoc� digitou o valor 3";
							break;
			default: cout << "\nVoc� digitou um valor diferente de 1,2 ou 3";
		}
	}
}
