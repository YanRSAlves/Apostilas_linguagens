Algoritmo "Tabuada"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2022
Var
// Se��o de Declara��es das vari�veis 
   cont, n, r : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
       cont <- 1
       Escreval("Digite o n�mero de qual tabuada voc� quer ver: ")
       leia (n)
       escreval()
       Repita
       r <- (n * cont)
       Escreval( n ,"  x ", cont," = ", r)
          cont <- cont + 1
       Ate (cont > 10)

Fimalgoritmo