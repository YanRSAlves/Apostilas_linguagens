// Ponteiros de fun��o
// Curso de Linguagem de Programa��o C++ PROG018.CPP - Silvio Sabino
#include<iostream.h>

// declarando um ponteiro que aponta para uma fun��o do tipo void
// sem nenhum argumento
void (*ponteiro)(void);

void funcao_1(void){
	cout << "\nExecutando a fun��o 1!";
	return;
}

void funcao_2(void){
	cout << "\nExecutando a fun��o 2!";
	return;
}

void main(void){

	int resposta;
	do{
		cout << "\nVoc� deseja executar qual fun��o (1 ou 2)?";
		cin  >>resposta;
	}while(resposta!=1&&resposta!=2);

	ponteiro = resposta==1?funcao_1:funcao_2;
	ponteiro();
	return;
}
