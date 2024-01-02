Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/12/2023
Var
// Seção de Declarações das variáveis 
operacao: caractere
Numero1, Numero2 : Real
Soma, Subtracao, Multiplicacao, Divisao: Real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

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
     Escreval("A soma deles é igual a ",Soma)
caso "-"
     Escreval()
     Escreval("A Subtracao deles é igual a ",Subtracao)
caso "*"
     Escreval()
     Escreval("A Multiplicacao deles é igual a ",Multiplicacao)
caso "%"
     Escreval()
     Escreval("A Divisao deles é igual a ",Divisao)
fimescolha
Fimalgoritmo