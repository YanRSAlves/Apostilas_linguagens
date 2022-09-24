// Ponteiros de fun‡Æo
// Curso de Linguagem de Programa‡Æo C++ PROG018.CPP - Silvio Sabino
#include<iostream.h>

// declarando um ponteiro que aponta para uma fun‡Æo do tipo void
// sem nenhum argumento
void (*ponteiro)(void);

void funcao_1(void){
	cout << "\nExecutando a fun‡Æo 1!";
	return;
}

void funcao_2(void){
	cout << "\nExecutando a fun‡Æo 2!";
	return;
}

void main(void){

	int resposta;
	do{
		cout << "\nVocˆ deseja executar qual fun‡Æo (1 ou 2)?";
		cin  >>resposta;
	}while(resposta!=1&&resposta!=2);

	ponteiro = resposta==1?funcao_1:funcao_2;
	ponteiro();
	return;
}
