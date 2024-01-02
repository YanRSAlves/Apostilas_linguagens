Algoritmo "creuza2.0"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2022
Var
// Seção de Declarações das variáveis 

        n1, n2, m : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

       escreval("Média de notas dos alunos do Primeiro Período:")
       escreva ("AV1: ")
       leia(n1)
       escreva ("AV2: ")
       leia(n2)
       m <- (n1+n2)/2
       escreval("A média do aluno foi: ", m)
       escreval()
       Se (m>=7) entao
          escreval("Aluno Aprovado!")
       senao
            Se (m>=5) e (m<=6)  entao
             escreval("Aluno de Recuperação")
            senao
              escreval("Aluno  Reprovado")
            fimse
       fimse
       

Fimalgoritmo