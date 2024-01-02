Algoritmo "Calculadora Simples"
// Disciplina   : Linguagem e Lógica de Programação
// Professor   : Fernando Maransatto
// Descrição   : Calculadora Simples
// Autor(a)    : Matheus Carnaúba de Souza
// Data atual  : 27/01/2021
Var
// Seção de Declarações das variáveis

resultado : real
numero : real
operacao : caractere
continuar : caractere

Inicio

escreval ("----- CALCULADORA -----")

escreval (" ")

repita

escreval ("Digite o primeiro número: ")
leia (resultado)

escreval ("Escolha a operação [+ - * /]")
leia (operacao)

escreval ("Digite o número: ")
leia (numero)

escolha operacao

caso "+"
resultado <- resultado+numero

caso "-"
resultado <- resultado-numero

caso "*"
resultado <- resultado*numero

caso "/"
resultado <- resultado/numero

fimescolha

escreval(" ")

escreval ("O seu número é: ")
escreval (resultado)

escreva ("Deseja continuar S/N")
leia (continuar)

se (continuar = "s") entao

limpatela

senao
fimse

ate (continuar = "n")

fimalgoritmor