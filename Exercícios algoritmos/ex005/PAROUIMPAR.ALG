Algoritmo "parOuImpar"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2022
Var
// Se��o de Declara��es das vari�veis 
     N : inteiro
Procedimento ParOuImpar(V : inteiro)
Inicio
    Se (V%2 = 0) entao
      Escreval("O n�mero ", V," � PAR")
    senao
      Escreval("O n�mero ", V," � IMPAR")
    Fimse
FimProcedimento
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
       Escreva("Digite um n�mero: ")
       leia (N)
       ParOuImpar(N)

Fimalgoritmo