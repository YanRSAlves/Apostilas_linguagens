Algoritmo "Tabuada"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2022
Var
// Seção de Declarações das variáveis 
   cont, n, r : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
       cont <- 1
       Escreval("Digite o número de qual tabuada você quer ver: ")
       leia (n)
       escreval()
       Repita
       r <- (n * cont)
       Escreval( n ,"  x ", cont," = ", r)
          cont <- cont + 1
       Ate (cont > 10)

Fimalgoritmo