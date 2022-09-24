// Ilustrando os resultados dos operadores relacionais e l¢gicos
// Curso de Linguagem de Programa‡Æo C++ PROG009.CPP - Silvio Sabino
#include<iostream.h>

void main(void){

	float num1, num2;

	cout << "\nInforme o primeiro valor real: ";
	cin  >> num1;
	cout << "\nInforme o segundo valor real: ";
	cin  >> num2;

	cout << "\n\nResultado de "<<num1<<" == "<<num2<<" -> " <<(num1==num2);
	cout << "\nResultado de "<<num1<<" != "<<num2<<" -> " <<(num1!=num2);
	cout << "\nResultado de "<<num1<<" >  "<<num2<<" -> " <<(num1>num2);
	cout << "\nResultado de "<<num1<<" <  "<<num2<<" -> " <<(num1<num2);
	cout << "\nResultado de "<<num1<<" >= "<<num2<<" -> " <<(num1>=num2);
	cout << "\nResultado de "<<num1<<" <= "<<num2<<" -> " <<(num1<=num2);
	cout << "\nResultado de "<<num1<<" && "<<num2<<" -> " <<(num1&&num2);
	cout << "\nResultado de "<<num1<<" || "<<num2<<" -> " <<(num1||num2);
}