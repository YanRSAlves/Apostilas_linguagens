// Terceiro programa C++
// Curso de Linguagem de Programa��o C++ PROG003.CPP - Silvio Sabino

#include<iostream.h> // incluindo iostream.h para utilizar a classe cout

// fun��o que retorna a soma de 2 n�meros cujos valores
// s�o passados como par�metros
int adicao (int a, int b){

	// declarando a vari�vel que conter� o valor da soma
	// dos dois par�metros "a" e "b"
	int resultado;

	// atribuindo o valor da adicao de "a" e "b" � vari�vel resultado
	resultado = a + b;

	// retornando o valor contido na vari�vel "resultado" para
	// o processo anterior, que nesse caso � a fun��o main( )
	return resultado;

	}

	// fun��o principal do programa onde � iniciada a execu��o
	void main(void){

		// declarando duas vari�veis do tipo inteiro
		int n , m, soma;

		// pedindo para o usu�rio o valor de "n"
		cout << "\nDigite o 1� n�: ";
		cin  >> n;

		// pedindo para o usu�rio o valor de "m"
		cout << "Digite o 2� n�: ";
		cin  >> m;
		// passando "n" e "m" como par�metros para que a fun��o soma(int, int)
		// calcule a soma dos dois valores e retorne o resultado que � atribu�do
		// � vari�vel soma
		soma = adicao (n, m);

		// imprimindo o valor de "soma" na tela
		cout << "A soma �: " << soma;

		// retornando o processo anterior, no caso o sistema operacional
		return;

		}

		// Fim do programa

