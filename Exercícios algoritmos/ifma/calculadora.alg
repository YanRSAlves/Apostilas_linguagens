Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/12/2023
Var
// Se��o de Declara��es das vari�veis 
operacao: caractere
Numero1, Numero2 : Real
Soma, Subtracao, Multiplicacao, Divisao: Real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

Escreval("Escolha qual operacao deseja realizar com dois numeros")
Escreva("informe o primeiro Numero: ")
Leia(Numero1)
Escreva("Informe o Segundo Numero: ")
Leia(Numero2)

Soma <- Numero1 + Numero2
Subtracao <- Numero1 - Numero2
Multiplicacao <- Numero1 * Numero2
Divisao <- Numero1 / Numero2

Escreval("Escolha a operacao de deseja fazer:(+)(%)(-)(*) ")
leia(operacao)

escolha operacao
caso "+"
     Escreval()
     Escreval("A soma deles � igual a ",Soma)
caso "-"
     Escreval()
     Escreval("A Subtracao deles � igual a ",Subtracao)
caso "*"
     Escreval()
     Escreval("A Multiplicacao deles � igual a ",Multiplicacao)
caso "%"
     Escreval()
     Escreval("A Divisao deles � igual a ",Divisao)
fimescolha
Fimalgoritmo