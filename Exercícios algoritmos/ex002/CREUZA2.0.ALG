Algoritmo "creuza2.0"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2022
Var
// Se��o de Declara��es das vari�veis 

        n1, n2, m : real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

       escreval("M�dia de notas dos alunos do Primeiro Per�odo:")
       escreva ("AV1: ")
       leia(n1)
       escreva ("AV2: ")
       leia(n2)
       m <- (n1+n2)/2
       escreval("A m�dia do aluno foi: ", m)
       escreval()
       Se (m>=7) entao
          escreval("Aluno Aprovado!")
       senao
            Se (m>=5) e (m<=6)  entao
             escreval("Aluno de Recupera��o")
            senao
              escreval("Aluno  Reprovado")
            fimse
       fimse
       

Fimalgoritmo