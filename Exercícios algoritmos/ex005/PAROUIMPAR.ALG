Algoritmo "parOuImpar"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2022
Var
// Seção de Declarações das variáveis 
     N : inteiro
Procedimento ParOuImpar(V : inteiro)
Inicio
    Se (V%2 = 0) entao
      Escreval("O número ", V," é PAR")
    senao
      Escreval("O número ", V," é IMPAR")
    Fimse
FimProcedimento
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
       Escreva("Digite um número: ")
       leia (N)
       ParOuImpar(N)

Fimalgoritmo