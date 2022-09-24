// Introduá∆o ao modo gr†fico - Desenhando um bot∆o
// Curso de Linguagem de Programaá∆o C++ PROG024.CPP - Silvio Sabino

#include<graphics.h>
#include<conio.h>
#include<dos.h>


// funá∆o que desenha o bot∆o na tela, que pode estar pressionado
// ou n∆o, dependendo do valor de flag
// a diferenáa entre os dois estados Ç a cor das linhas da borda
// que representam luz ou sombra (branco ou cinza)
void botao(int flag){

	// movendo o cursor gr†fico para a posiá∆o (100,100)
	moveto(100,100);

	// desenhando a parte superior do botao
	setcolor(flag?15:8);
	linerel(80,0);
	linerel(0,-32);

	// desenhando a parte inferior do botao
	setcolor(flag?8:15);
	linerel(-80,0);
	linerel(0,32);

	// escrevendo um texto no bot∆o
	for(register i=0;i<=flag;i++){
		setcolor(!i&&flag?7:8);
		outtextxy(120+i,80+i,"teste");
	}
}

// programa principal
void main(void){

	//iniciando o modo gr†fico
	int d=DETECT,m;
	initgraph(&d,&m,"C:\\ARQUIV~1\\TC\\BGI");

	// especificando cinza claro como cor de fundo
	setbkcolor(7);

	// chamando a funá∆o que desenha o grafico
	botao(0);
	getch();
	botao(1);

	// esperando 0,2 segundo para que seja percebido
	// o movimento do botao
	delay(200);

	// fechando o modo grafico
	closegraph();
}
