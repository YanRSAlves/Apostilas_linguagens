/*######################################################################################
#                                  Recursividade                                       #
#                            Desenvolvido Por: Willian A.Mayan                         #
#                              Sem uso de variaveis globais ;)                         #
######################################################################################*/

#include <stdio.h>

int imprime(int[],int);

int main()
{

   int vetor[10];
   int i;

   for(i=0;i<10;i++) //Adiciono elementos no vetor 1,2,3...9,10
   {
       vetor[i]=i;
   }
   imprime(vetor,i); //Passo o vetor e o contador
}

int imprime (int vetor[],int i) //i chega como 10, então ele  entra no else
{
   if(i==0)        //quando i for = = a 0 eu paro de chamar a função, nisso ja imprimi todo os elementos,
   {              //todas as funçoes chamadas são fechadas e retorno ao main logo apois isso
       return 1;
   }
   else
   {
       printf("%d \n",vetor[i]); // imprime o elemento que esta na posiçao [i] do vetor
       imprime(vetor,i-1);      //chamo a mesma função decrementando o i
   }
}
