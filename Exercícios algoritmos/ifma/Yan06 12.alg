Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/12/2023
Var
Jogador1,Jogador2 : caractere
alturaJogador1,alturaJogador2 : Real


Inicio
Escreval("Comparando alturas de dois Jogadores de basquete")
Escreval()

Escreva("Informe o nome do Primeiro Jogador: ")
leia(Jogador1)

Escreva("Informe a altura do Primeiro Jogador: ")
leia(alturaJogador1)

Escreva("Informe o nome do Segundo Jogador: ")
leia(Jogador2)

Escreva("Informe a altura do Segundo Jogador: ")
leia(alturaJogador2)

Escreval()
Escreval()

Se alturaJogador1 > alturaJogador2 Entao
   Escreval("O Jogador mais alto é o ", Jogador1, " com altura de ",alturaJogador1," metros de altura")
Senao
 Se alturaJogador2 > alturaJogador1 Entao
  Escreval("O Jogador mais alto é o ", Jogador2, " com altura de ",alturaJogador2," metros de altura")
 Senao
  Escreval("Os Jogadores tem a mesma altura de ",  alturaJogador1, " metros")
 Fimse
Fimse




Fimalgoritmo