// Arquivos em C++
// Curso de Linguagem de Programaá∆o C++ PROG022.CPP - Silvio Sabino
// inserindo arquivos cabeáalho necess†rios
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

// definindo constantes para facilitar o entendimento
#define ALTERA 0
#define EXCLUI 1
#define LISTA  2

FILE *arq; //arquivo onde ser∆o armazenados os dados
size_t tamanho; //vari†vel que guardar  o tamanho da estrutura "colaborador"

// estrutura para referenciar o registro
struct colaborador{
	int reg;		// registro na empresa
	char nome[41];  	// nome do colaborador
	char CPF[12];   	// cadastro de pessoa f°sica(CPF)
};

// testa fim de arquivo e leitura
int teste_fluxo(colaborador &empr,FILE *str){
	return(!feof(str)&&fread(&empr,tamanho,1,str)==1);
}

// exibe os dados de um colaborador na tela
void exibir(colaborador c){
	cout <<c.reg<<" - "<<c.nome<<" - "<<c.CPF<<"\n";
}

// testa abertura do arquivo
int abrir(void){

	//tenta abrir o arquivo para atualizaÁ„o ou cria novo arquivo
	if(!(arq=fopen("C:\\exemplo.txt","a+"))){
		cout << "Erro n„o abrir arquivo. Pressione qualquer tecla p/ voltar";
		getch();
		return(1);

	}
	return(0);
}

// exibe um menu na tela para que o usu†rio realize a escolha
char menu(void){

	// vari·vel est·tica para identificar a primeira chamada
	static char opcao=0;

	// testando se Ç a primeira chamada ou o usu†rio encerrou a sess∆o
	if(opcao&&opcao!=54)fclose(arq);

	// limpando a tela
	clrscr();

	// exibindo o menu
	cout << "\nPrograma exemplo de manipulaá∆o de arquivos\n\n";
	cout << "1) Inserir\n";
	cout << "2) Consultar\n";
	cout << "3) Alterar\n";
	cout << "4) Excluir\n";
	cout << "5) Listar\n";
	cout << "6) Sair";

	// esperando a opá∆o do usu†rio.
	// o programa n∆o ir† adiante enquanto o usu†rio n∆o efetuar
	// uma escolha v†lida
	do{
		gotoxy(1,10);
		cout << "Tecle a sua opá∆o.";
		opcao=getch();
	}while(opcao<49||opcao>54);

	// se o usu†rio n∆o deseja encerrar a sess∆o, abre-se o arquivo
	// e se houver erro o usu†rio ser† avisado, voltando para o menu
	if(opcao!=54&&abrir())return(-1);

	// retornando para main()
	return opcao;
}


// inserindo um colaborador
void insere(void){

	colaborador novo;

	// solicitando a entrada de dados para o usu†rio
	cout << "\nInforme o registro: ";
	cin  >> novo.reg;
	cin.getline(novo.nome,40);
	cout << "\n\nInforme o nome: ";
	cin.getline(novo.nome,40);
	cout << "\nInforme o CPF: ";
	cin.getline(novo.CPF,11);

	// gravando os dados em arquivo
	fwrite((void*)&novo,tamanho,1,arq);
}


// consultando os dados armazenados
void consulta(void){
	char opcao;

	//perguntando ao usu†rio qual o chave de consulta desejada
	//a instruá∆o do-while somente terminar† quando a resposta for v†lida
	do{
		gotoxy(1,12);
		cout << "Deseja consultar por nome, CFP ou registro (N/C/R)?";
		opcao=toupper(getch());
	}while(opcao!='N'&&opcao!='C'&&opcao!='R');

	//solicitando agora a entrada do dado a ser consultado
	//observe o uso do operador tern†rio ?:
	cout <<"\n\n"<<(opcao=='N'?"Nome: ":opcao=='C'?"CPF: ":"Registro: ");
	colaborador cons,temp;
	if(opcao=='R')cin >> cons.reg;
	else cin.getline(opcao=='N'?cons.nome:cons.CPF,opcao=='N'?40:11);
	cout <<"\n";
	rewind(arq);

	//pesquisando o arquivo e exibindo os dados que satisfazem Ö consulta
	while(teste_fluxo(temp,arq))if(
		(opcao=='N'&&!strcmp(cons.nome,temp.nome))||
		(opcao=='C'&&!strcmp(cons.CPF,temp.CPF))||
		(opcao=='R'&&cons.reg==temp.reg)){

			exibir(temp);
	}

	//deixando o usu†rio decidir quando voltar ao menu
	cout <<"\nPressione qualquer tecla para voltar ao menu";
	getch();
}

//alterando, excluindo ou listando os dados gravados
void modifica(int z=ALTERA){
	int reg,opcao;
	colaborador temp;

	//como o registro Ç £nico para cada colaborador, as operaá‰es de
	//alteraá∆o e exclus∆o s∆o direcionadas por esse campo
	if(z!=LISTA){
		cout <<"\nInforme o no. do registro: ";
		cin  >>reg;
	}
	else cout <<"\n\n";

	//criando um arquivo tempor†rio para auxiliar as operaá‰es de
	// alteraá∆o e exclus∆o
	FILE *tmp=tmpfile();

	// pesquisando o arquivo e efetuando a operaá∆o desejada
	while(teste_fluxo(temp,arq)){

		// se foi pedida a listagem, ent∆o todos os dados s∆o exibidos
		if(z==LISTA)exibir(temp);

		//sen∆o, Ç executada a aá∆o somente no colaborador informado
		else if(temp.reg==reg){
			if(z==ALTERA){
				do{
					gotoxy(1,11);
					cout <<"\n\nAlterar nome ou CPF (N/C)?";
					opcao=toupper(getch());
				}while(opcao!='N'&&opcao!='C');

				// novamente o uso extensivo do operador tern†rio ?:
				cout <<"\n"<<"Novo "<<(opcao=='N'?"nome: ":"CPF: ");
				cin.get(temp.CPF[11]);
				cin.getline(opcao=='N'?temp.nome:temp.CPF,opcao=='N'?40:11);
			}
			cout 	<<"Registro "<<(z==ALTERA?"alterado. ":"exclu°do. ");
		}
		if(temp.reg!=reg||z==ALTERA)fwrite(&temp,tamanho,1,tmp);
	}

	//reescrevendo os dados reorganizados no arquivo de origem
	if(z!=LISTA){
		fclose(arq);
		arq=fopen("C:\\Exemplo.txt","wb+");
		rewind(tmp);
		while(teste_fluxo(temp,tmp))fwrite(&temp,tamanho,1,arq);
	}
	// se foi pedida a lista, ent∆o somente Ç impresso o caractere nova linha
	else cout <<"\n";
	fclose(tmp);
	cout <<"Pressione qualquer tecla p/ voltar.";
	getch();
}

// programa principal
void main(void){

	// obtendo o tamanho da estrutura colaborador
	// isto Ç £til porque economiza c¢digo e chamadas de funá∆o
	tamanho=sizeof(colaborador);

	// o programa fica esperando o usu†rio escolher a aá∆o
	// e direciona a aá∆o conforme e sua opá∆o
	for(;;)switch(menu()){
		case '1': insere();
				break;
		case '2': 	consulta();
				break;
		case '3': 	modifica();
				break;
		case '4': 	modifica(EXCLUI);
				break;
		case '5': 	modifica(LISTA);
		case  -1:	break;
		case '6': 	return;
	}
}
// fim do programa
