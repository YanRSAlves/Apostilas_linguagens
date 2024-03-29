// Ilustrando o uso de modelos de fun��o e ponteiros de 2a ordem
// Curso de Linguagem de Programa��o C++ PROG021.CPP - Silvio Sabino
#include<iostream.h>

// Implementando o modelo de fun��o que aloca mem�ria e retorna NULL
// se n�o existir espa�o dispon�vel
template <class tipo> tipo* aloca(tipo **ponteiro, int n){
	return(*ponteiro=new tipo[n]);
}

void main(void){
	float *flutuante=NULL;
	int n;
	cout << "\nEscolha o n�mero de elementos: ";
	cin  >>n;
	cout << (aloca(&flutuante,n)?"Aloca��o executada":"Espa�o insuficiente!");
	if(flutuante)delete(flutuante);
	return;
}
