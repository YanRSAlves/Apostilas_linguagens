// Ilustrando o uso de modelos de funá∆o e ponteiros de 2a ordem
// Curso de Linguagem de Programaá∆o C++ PROG021.CPP - Silvio Sabino
#include<iostream.h>

// Implementando o modelo de funá∆o que aloca mem¢ria e retorna NULL
// se n∆o existir espaáo dispon°vel
template <class tipo> tipo* aloca(tipo **ponteiro, int n){
	return(*ponteiro=new tipo[n]);
}

void main(void){
	float *flutuante=NULL;
	int n;
	cout << "\nEscolha o n£mero de elementos: ";
	cin  >>n;
	cout << (aloca(&flutuante,n)?"Alocaá∆o executada":"Espaáo insuficiente!");
	if(flutuante)delete(flutuante);
	return;
}
