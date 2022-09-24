// Segundo programa C++
// Curso de Linguagem de Programa‡Æo C++ PROG002.CPP - Silvio Sabino

#include<iostream.h> // incluindo iostream.h para utilizar a classe cout

// fun‡Æo que retorna a soma de 2 n£meros cujos valores
// sÆo passados como parƒmetros
int adicao (int a, int b){

	// declarando a vari vel que conter  o valor da soma
	// dos dois parƒmetros "a" e "b"
	int resultado;

	// atribuindo o valor da adicao de "a" e "b" … vari vel resultado
	resultado = a + b;

	// retornando o valor contido na vari vel "resultado" para
	// o processo anterior, que nesse caso ‚ a fun‡Æo main( )
	return resultado;

	}

	// fun‡Æo principal do programa onde ‚ iniciada a execu‡Æo
	void main(void){

		// declarando duas vari veis do tipo inteiro
		int n , m, soma;

		// atribuindo o valor 2 … vari vel "n" e 4 … vari vel "m"
		n = 2;
		m = 4;

		// passando "n" e "m" como parƒmetros para que a fun‡Æo soma(int, int)
		// calcule a soma dos dois valores e retorne o resultado que ‚ atribu¡do
		// … vari vel soma
		soma = adicao (n, m);

		// imprimindo o valor de "soma" na tela
		cout << soma;

		// retornando o processo anterior, no caso o sistema operacional
		return;

}

// Fim do programa

