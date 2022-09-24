// Sobrecarga de operador, uso da classes, construtor e destrutor
// Curso de Linguagem de Programa‡Æo C++ PROG020.CPP - Silvio Sabino

#include<string.h>
#include<iostream.h>

// criando uma struct para representar n£meros complexos
struct complex{

	double real; // parte real
	double imag; // parte imagin ria

	// construtor para a classe complex com argumento padrÆo
	complex(double real, double imag=0){
		this->real=real;
		this->imag=imag;
	}

	// construtor sobrecarregado sem argumentos
	complex(void){
		real=0;
		imag=0;
	}
};

// criando a classe string para ser utilizada como parƒmetro
// de operator
class string {

	// ponteiro para char manipulado pelo objeto
	// nenhuma outra parte do programa pode acessar diretamente
	// o conte£do desse ponteiro
	char *str;

	//comprimento m ximo permitido
	int n;

	// tornando p£blicas as fun‡äes do objeto para que o programa
	// possa invoc -las
	public:

	// atribuindo uma cadeia … str
	// note como o argumento str ‚ diferenciado do ponteiro str que
	// faz parte do objeto usando-se o ponteiro this
	int setstr(char *str){
		if(!this->str||n<strlen(str))return(1);
		strcpy(this->str,str);
		return(0);
	}

	//obtendo o conte£do de str
	// o uso do ponteiro temp evita que o processo externo
	// obtenha o endere‡o de str, podendo obter apenas o
	// conte£do apontado por ele
	char *getstr(void){
		char *temp=new char[strlen(str)+1];
		return(strcpy(temp,str));
	}

	// sobrecarregando + para concatenar strings
	char *string::operator+(string &str1){
		char *temp=new char[strlen(str)+1];
		strcpy(temp,str);
		return(strcat(temp,str1.getstr()));
	}

	// construtor da classe, que aloca mem¢ria
	// de acordo com o n£mero de itens informado
	// pelo processo anterior
	string(int itens=0){
		n=itens;
		str=n?new char[n]:NULL;
	}

	// liberando o espa‡o alocado para o ponteiro str
	// e destruindo o objeto
	~string(void){
		if(str)delete(str);
	}
};


// sobrecarregando o mesmo operador para somar as partes real
// e imagin ria de dois n£meros complexos
complex operator+(complex n1, complex n2){
	return(complex(n1.real+n2.real,n1.imag+n2.imag));
}

// programa principal
void main(void){

	// declarando objetos de classe string
	string string1(11),string2(11),string3(22);

	// declarando estruturas do tipo complex
	complex c1(5,8), c2(2.4), c3;

	string1.setstr("string1");
	string2.setstr(" + string2");

	// utilizando a sobrecarga do operador + para concatenar as strings
	string3.setstr(string1+string2);

	c3=c1+c2;

	cout << "\nresultado com *char  : " << string3.getstr();
	cout << "\nresultado com complex: " << c3.real << " " << c3.imag;
}

